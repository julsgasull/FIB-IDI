#include "MyGLWidget.h"

#include <iostream>
using namespace std;

MyGLWidget::MyGLWidget (QWidget* parent) : QOpenGLWidget(parent), program(NULL)
{
	setFocusPolicy(Qt::StrongFocus);  // per rebre events de teclat
}

MyGLWidget::~MyGLWidget ()
{
	if (program != NULL) delete program;
}

void MyGLWidget::initializeGL ()
{
	// Cal inicialitzar l'ús de les funcions d'OpenGL
	initializeOpenGLFunctions();  

	glClearColor(0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
	glEnable(GL_DEPTH_TEST);
	carregaShaders();
	createBuffersModel();
	createBuffersTerra();
	iniCamera ();
}

void MyGLWidget::iniCamera ()
{
	/*--------------------- VIEW ---------------------*/
	VRP[0] = (Pmin[0]+Pmax[0]) / 2.0;			// VRP
	VRP[1] = (Pmin[1]+Pmax[1]) / 2.0,			// VRP
	VRP[2] = (Pmin[2]+Pmax[2]) / 2.0;			// VRP
	r = sqrt((Pmin[0]-VRP[0])*(Pmin[0]-VRP[0]) + (Pmin[1]-VRP[1])*(Pmin[1]-VRP[1]) + (Pmin[2]-VRP[2])*(Pmin[2]-VRP[2])); 	// radi (igual amb Pmax)
	d = 2*r;									// d (> r)
	UP = glm::vec3(0.0, 1.0, 0.0);	 			// UP -> no per euler
	
	/*--------------------- PROJECTION ---------------------*/
	alfaIni = asin(r/d);	// alfa
	FOV = 2 * alfaIni;		// FOV
	// raV al resize
	znear = d - r;			// Znear -> canviarà segons càmera (= 1)
	zfar  = d + r;			// Zfar -> sempre igual
	
	cameraZero ();
}

void MyGLWidget::paintGL () 
{
	glViewport (0, 0, width(), height()); // Aquesta crida no caldria perquè Qt la fa de forma automàtica amb aquests paràmetres

	
	// Esborrem el frame-buffer i el depth-buffer
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Activem el VAO per a pintar el terra 
	glBindVertexArray (VAO_Terra);

	modelTransformTerra ();
	// pintem terra
	glDrawArrays(GL_TRIANGLES, 0, 6);

	// Activem el VAO per a pintar el Patricio
	glBindVertexArray (VAO_Patr);

	modelTransformPatricio ();
	// Pintem Patricio
	glDrawArrays(GL_TRIANGLES, 0, patr.faces().size()*3);

	glBindVertexArray(0);
}

void MyGLWidget::resizeGL (int w, int h) 
{
	glViewport (0, 0, w, h);	 						// viewport inicia
    raV = float (w) / float (h);						// raV
    if (raV < 1.0) FOV = 2.0 * atan(tan(alfaIni)/raV);	// modificar FOV
	else FOV = alfaIni * 2;								// deixar FOV igual
    projectTransform();	    							// funció
}

void MyGLWidget::modelTransformPatricio ()
{
	glm::mat4 TG(1.f);  // Matriu de transformació
	TG = glm::translate(TG, glm::vec3 (4.0, 0, 3.5));
	TG = glm::scale(TG, glm::vec3(escala, escala, escala));
	TG = glm::translate(TG, -centreBasePatr);
	glUniformMatrix4fv (transLoc, 1, GL_FALSE, &TG[0][0]);
}

void MyGLWidget::modelTransformTerra ()
{
	glm::mat4 TG(1.f);  // Matriu de transformació
	glUniformMatrix4fv (transLoc, 1, GL_FALSE, &TG[0][0]);
}

void MyGLWidget::projectTransform () 
{	
	glm::mat4 Proj = glm::perspective (FOV, raV, znear, zfar);
	glUniformMatrix4fv (projLoc, 1, GL_FALSE, &Proj[0][0]);
}

void MyGLWidget::viewTransform ()
{
	glm::mat4 View (1.0f);	
	if (euler)
	{
		View = glm::translate(View, glm::vec3(0.0, 0.0, -d));
		View = glm::rotate(View, -angleEuler[2], glm::vec3(0.0, 0.0, 1.0));		// phy
		View = glm::rotate(View,  angleEuler[0], glm::vec3(1.0, 0.0, 0.0)); 	// theta
		View = glm::rotate(View, -angleEuler[1], glm::vec3(0.0, 1.0, 0.0)); 	// psi
		View = glm::translate(View, -VRP);
	} else
	{ 
		View = glm::lookAt (OBS, VRP, UP);
	}
	glUniformMatrix4fv (viewLoc, 1, GL_FALSE, &View[0][0]);
}

void MyGLWidget::createBuffersModel ()
{
	// Carreguem el model de l'OBJ - Atenció! Abans de crear els buffers!
	patr.load("./models/Patricio.obj");

	// Calculem la capsa contenidora del model
	calculaCapsaModel ();

	// Creació del Vertex Array Object del Patricio
	glGenVertexArrays(1, &VAO_Patr);
	glBindVertexArray(VAO_Patr);

	// Creació dels buffers del model patr
	GLuint VBO_Patr[2];
	// Buffer de posicions
	glGenBuffers(2, VBO_Patr);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_Patr[0]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat)*patr.faces().size()*3*3, patr.VBO_vertices(), GL_STATIC_DRAW);

	// Activem l'atribut vertexLoc
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);

	// Buffer de component difusa usada com a color
	glBindBuffer(GL_ARRAY_BUFFER, VBO_Patr[1]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat)*patr.faces().size()*3*3, patr.VBO_matdiff(), GL_STATIC_DRAW);

	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);

	glBindVertexArray(0);
}

void MyGLWidget::createBuffersTerra ()
{
	// Dades del terra
	// VBO amb la posició dels vèrtexs
	glm::vec3 posterra[6] = {
	glm::vec3(0.0, 0.0, 5.0),
	glm::vec3(5.0, 0.0, 5.0),
	glm::vec3(0.0, 0.0, 0.0),
	glm::vec3(0.0, 0.0, 0.0),
	glm::vec3(5.0, 0.0, 5.0),
	glm::vec3(5.0, 0.0, 0.0),
	}; 

	glm::vec3 color(0.8,0,0.8);

	// Fem que aquest material afecti a tots els vèrtexs per igual
	glm::vec3 colterra[6] = {
	color, color, color, color, color, color
	};

	// Creació del Vertex Array Object del terra
	glGenVertexArrays(1, &VAO_Terra);
	glBindVertexArray(VAO_Terra);

	GLuint VBO_Terra[2];
	glGenBuffers(2, VBO_Terra);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_Terra[0]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(posterra), posterra, GL_STATIC_DRAW);

	// Activem l'atribut vertexLoc
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);

	glBindBuffer(GL_ARRAY_BUFFER, VBO_Terra[1]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(colterra), colterra, GL_STATIC_DRAW);

	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);

	glBindVertexArray(0);
}

void MyGLWidget::carregaShaders()
{
	// Creem els shaders per al fragment shader i el vertex shader
	QOpenGLShader fs (QOpenGLShader::Fragment, this);
	QOpenGLShader vs (QOpenGLShader::Vertex, this);
	// Carreguem el codi dels fitxers i els compilem
	fs.compileSourceFile("shaders/fragshad.frag");
	vs.compileSourceFile("shaders/vertshad.vert");
	// Creem el program
	program = new QOpenGLShaderProgram(this);
	// Li afegim els shaders corresponents
	program->addShader(&fs);
	program->addShader(&vs);
	// Linkem el program
	program->link();
	// Indiquem que aquest és el program que volem usar
	program->bind();

	// Obtenim identificador per a l'atribut “vertex” del vertex shader
	vertexLoc = glGetAttribLocation (program->programId(), "vertex");
	// Obtenim identificador per a l'atribut “color” del vertex shader
	colorLoc = glGetAttribLocation (program->programId(), "color");

	// Demanem identificadors per als uniforms del vertex shader
	transLoc = glGetUniformLocation (program->programId(), "TG");
	projLoc = glGetUniformLocation (program->programId(), "proj");
	viewLoc = glGetUniformLocation (program->programId(), "view");
}

void MyGLWidget::calculaCapsaModel ()
{
	// Càlcul capsa contenidora i valors transformacions inicials
	float minx, miny, minz, maxx, maxy, maxz;
	minx = maxx = patr.vertices()[0];
	miny = maxy = patr.vertices()[1];
	minz = maxz = patr.vertices()[2];
	for (unsigned int i = 3; i < patr.vertices().size(); i+=3)
	{
	if (patr.vertices()[i+0] < minx) minx = patr.vertices()[i+0];
	if (patr.vertices()[i+0] > maxx) maxx = patr.vertices()[i+0];
	if (patr.vertices()[i+1] < miny) miny = patr.vertices()[i+1];
	if (patr.vertices()[i+1] > maxy) maxy = patr.vertices()[i+1];
	if (patr.vertices()[i+2] < minz) minz = patr.vertices()[i+2];
	if (patr.vertices()[i+2] > maxz) maxz = patr.vertices()[i+2];
	}
	escala = 2.0/(maxy-miny);
	centreBasePatr[0] = (minx+maxx)/2.0; 
	centreBasePatr[1] = miny; 
	centreBasePatr[2] = (minz+maxz)/2.0;
}

void MyGLWidget::keyPressEvent(QKeyEvent* event) 
{
	makeCurrent();
	switch (event->key()) 
	{
		case Qt::Key_1:
			cameraOne ();
			break;
		case Qt::Key_2:
			cameraTwo ();
			break;
		case Qt::Key_3:
		cameraThree ();
			break;
		case Qt::Key_4:
			cameraFour ();
			break;
		case Qt::Key_0:
			cameraZero ();
			break;
		default: event->ignore(); break;
	}
	update();
}



/*------------------------------------------------------*/
/*------------------ Added functions -------------------*/
/*------------------------------------------------------*/

void MyGLWidget::cameraOne ()
{
	euler = false;
	OBS = glm::vec3(5.0, 1.0, 5.0);		// OBS
	FOV = (float)M_PI / 2.0;
	znear = 1;
	viewTransform ();
	projectTransform ();
}

void MyGLWidget::cameraTwo ()
{
	euler = false;
	OBS = glm::vec3(5.0, 1.0, 0.0);		// OBS
	FOV = (float)M_PI / 2.0;
	znear = 1;
	zfar = d + r;
	viewTransform ();
	projectTransform ();
}

void MyGLWidget::cameraThree ()
{
	euler = false;
	OBS = glm::vec3(0.0, 1.0, 0.0);		// OBS
	FOV = (float)M_PI / 2.0;
	znear = 1;
	viewTransform ();
	projectTransform ();
}

void MyGLWidget::cameraFour ()
{
	euler = false;
	OBS = glm::vec3(0.0, 1.0, 5.0);		// OBS
	FOV = (float)M_PI / 2.0;
	znear = 1;
	viewTransform ();
	projectTransform ();
}

void MyGLWidget::cameraZero ()
{
	euler = true;
	FOV = 2 * alfaIni;		// FOV
	znear = d - r;			// Znear
	viewTransform();
	projectTransform();
}

