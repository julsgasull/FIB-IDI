#include "MyGLWidget.h"
#include <math.h> 
#include <iostream>
using namespace std;

/*------------------------------------------------------------------------------------*/
/*---------------------------- CONSTRUCTORA / DESTRUCTORA ----------------------------*/
/*------------------------------------------------------------------------------------*/

MyGLWidget::MyGLWidget (QWidget* parent) : QOpenGLWidget(parent), program(NULL)
{
	setFocusPolicy(Qt::StrongFocus);  // per rebre events de teclat
	scale = 1.0f;
}

MyGLWidget::~MyGLWidget ()
{
	if (program != NULL) delete program;
}


/*------------------------------------------------------------------------------------*/
/*--------------------------------------- INICI --------------------------------------*/
/*------------------------------------------------------------------------------------*/

void MyGLWidget::initializeGL ()
{
	initializeOpenGLFunctions ();
	glClearColor (0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
	glEnable (GL_DEPTH_TEST);
	
	carregaShaders ();
	createBuffers ();
	ini_camera ();
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
	// Uniform locations
	transLoc = glGetUniformLocation (program->programId(), "TG");
	projLoc = glGetUniformLocation (program->programId(), "proj");
	viewLoc = glGetUniformLocation (program->programId(), "view");
}

void MyGLWidget::createBuffers () 
{
	carregaPatricio ();
	carregaTerra ();
	glBindVertexArray (0);
}

void MyGLWidget::carregaPatricio ()
{
	// Carregar model
	patricio.load("./models/Patricio.obj");
	calculaBaseCapsaPatricio ();
	
	// Activar VAO model
	glGenVertexArrays(1, &VAO_Patricio);
	glBindVertexArray(VAO_Patricio);
	
	// Posició model
	glGenBuffers(1, &VBO_PatricioPos);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_PatricioPos);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat)*patricio.faces().size()*3*3, patricio.VBO_vertices(), GL_STATIC_DRAW);
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);
	
	// Color model
	glGenBuffers(1, &VBO_PatricioCol);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_PatricioCol);
	glBufferData(GL_ARRAY_BUFFER,sizeof(GLfloat)*patricio.faces().size()*3*3, patricio.VBO_matdiff(), GL_STATIC_DRAW);
	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);
}

void MyGLWidget::calculaBaseCapsaPatricio ()
{
	glm::vec3 PminPatricio, PmaxPatricio;
	// iniciem per al bucle:
	// PminPatrcio
	PminPatricio[0] = patricio.vertices()[0];
	PminPatricio[1] = patricio.vertices()[1];
	PminPatricio[2] = patricio.vertices()[2];
	// PmaxPatrcio
	PmaxPatricio[0] = patricio.vertices()[0];
	PmaxPatricio[1] = patricio.vertices()[1];
	PmaxPatricio[2] = patricio.vertices()[2];
	
	// bucle:
	int size = patricio.vertices().size();
	for (int i = 3; i < size; i += 3)
	{
		// auxiliars
		float forX = patricio.vertices()[i];
		float forY = patricio.vertices()[i + 1];
		float forZ = patricio.vertices()[i + 2];
		// Pmin
		PminPatricio[0] = min(PminPatricio[0], forX);
		PminPatricio[1] = min(PminPatricio[1], forY); 
		PminPatricio[2] = min(PminPatricio[2], forZ);
		// Pmax
		PmaxPatricio[0] = max(PmaxPatricio[0], forX);
		PmaxPatricio[1] = max(PmaxPatricio[1], forY); 
		PmaxPatricio[2] = max(PmaxPatricio[2], forZ);
	}
	altura = PmaxPatricio[1]-PminPatricio[1];
	centreBaseCapsaPatricio = glm::vec3((PmaxPatricio[0]+PminPatricio[0])/2, PminPatricio[1], (PmaxPatricio[2]+PminPatricio[2])/2);
}

void MyGLWidget::carregaTerra ()
{
	// Carregar dades
	glm::vec3 posterra[4] = 
	{
		glm::vec3(-2.5,  0.0, -2.5),
		glm::vec3(-2.5,  0.0,  2.5),
		glm::vec3( 2.5,  0.0, -2.5),
		glm::vec3( 2.5,  0.0,  2.5)
	}; 
	glm::vec3 colterra[4] = 
	{
		glm::vec3(1, 1, 0),
		glm::vec3(0, 1, 1),
		glm::vec3(1, 0, 1),
		glm::vec3(1, 1, 0)
	};
	
	// Activar VAO terra
	glGenVertexArrays(1, &VAO_Terra);
	glBindVertexArray(VAO_Terra);
	
	// Posició terra
	glGenBuffers(1, &VBO_TerraPos);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_TerraPos);
	glBufferData(GL_ARRAY_BUFFER, sizeof(posterra), posterra, GL_STATIC_DRAW);
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);
	
	// Color terra
	glGenBuffers(1, &VBO_TerraCol);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_TerraCol);
	glBufferData(GL_ARRAY_BUFFER, sizeof(colterra), colterra, GL_STATIC_DRAW);
	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);
}

void MyGLWidget::ini_camera ()
{
	/*--------------------- VIEW ---------------------*/
	// VRP
	VRP[0] = (Pmin[0]+Pmax[0]) / 2.0;
	VRP[1] = (Pmin[1]+Pmax[1]) / 2.0,
	VRP[2] = (Pmin[2]+Pmax[2]) / 2.0;
	// radi (igual amb Pmax)
	r = sqrt(	(Pmin[0]-VRP[0])*(Pmin[0]-VRP[0]) + 
				(Pmin[1]-VRP[1])*(Pmin[1]-VRP[1]) + 
				(Pmin[2]-VRP[2])*(Pmin[2]-VRP[2]) );
	// d (> r)
	d = 2*r;
	// OBS
	OBS = VRP + d*glm::vec3(0.0, 0.0, 1.0);
	// UP (per defecte)
	UP = glm::vec3(0.0, 1.0, 0.0);	 
	// funció
	viewTransform();
	
	/*--------------------- PROJECTION ---------------------*/
	// FOV (canvia al resize)
	FOV = 2 * asin(r/d);
	// ra
	ra = 1.0;
	// Znear i Zfar
	znear = d - r;
	zfar  = d + r;
	// funció
	projectTransform();
}

void MyGLWidget::viewTransform ()
{
	// glm::mat4 View = glm::lookAt (OBS, VRP, UP);
	glm::mat4 View (1.0f);	
	View = glm::translate(View, -VRP);
	View = glm::rotate(View, -angleEuler[1], glm::vec3(0.0, 1.0, 0.0));
	View = glm::rotate(View,  angleEuler[0], glm::vec3(1.0, 0.0, 0.0)); 
	View = glm::rotate(View, -angleEuler[2], glm::vec3(0.0, 0.0, 1.0));
	View = glm::translate(View, glm::vec3(0.0, 0.0, -d));
	glUniformMatrix4fv (viewLoc, 1, GL_FALSE, &View[0][0]);
}

void MyGLWidget::projectTransform () 
{
	glm::mat4 Proj = glm::perspective (FOV, ra, znear, zfar);
	glUniformMatrix4fv (projLoc, 1, GL_FALSE, &Proj[0][0]);
}

/*------------------------------------------------------------------------------------*/
/*-------------------------------------- PINTAR --------------------------------------*/
/*------------------------------------------------------------------------------------*/

void MyGLWidget::paintGL () 
{
	/*glViewport (0, 0, width(), height()); // no necessària aquí */

	// Esborrem el frame-buffer
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	// Pintar
	modelTransformPatricio (); 
	glBindVertexArray (VAO_Patricio);
	glDrawArrays (GL_TRIANGLES, 0, patricio.faces().size()*3);

	modelTransformTerra (); 
	glBindVertexArray (VAO_Terra);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
	
	// desactivar
	glBindVertexArray (0);
}

void MyGLWidget::modelTransformPatricio () 
{
	glm::mat4 transform (1.0f);
	transform = glm::scale(transform, glm::vec3(scale));
	transform = glm::rotate(transform, angle, glm::vec3(0.0, 1.0, 0.0));
	transform = glm::scale(transform, glm::vec3(4.0/altura, 4.0/altura, 4.0/altura));  	// altura = 4
	transform = glm::translate(transform, -centreBaseCapsaPatricio);
	glUniformMatrix4fv(transLoc, 1, GL_FALSE, &transform[0][0]);
}

void MyGLWidget::modelTransformTerra () 
{
	glm::mat4 transform (1.0f);
	transform = glm::scale(transform, glm::vec3(scale));
	glUniformMatrix4fv(transLoc, 1, GL_FALSE, &transform[0][0]); 
}

/*------------------------------------------------------------------------------------*/
/*-------------------------------------- RESIZE --------------------------------------*/
/*------------------------------------------------------------------------------------*/

void MyGLWidget::resizeGL (int w, int h) 
{
    // viewport inicial
    glViewport (0, 0, w, h);
    // raV
    float raV = float (w) / float (h);
    ra = raV;
    // canviar en cas que es necessiti
    if (raV < 1.0) FOV = 2.0*atan(tan((float)M_PI/4)/raV);
    // funció
    projectTransform();
}

/*------------------------------------------------------------------------------------*/
/*-------------------------------------- EVENTS --------------------------------------*/
/*------------------------------------------------------------------------------------*/

void MyGLWidget::keyPressEvent (QKeyEvent* event) 
{
	makeCurrent();
	switch (event->key()) 
	{
		case Qt::Key_S:	 	// escalar a més gran
			scale += 0.05;
			break;
		case Qt::Key_D: 	// escalar a més petit
			scale -= 0.05;
			break;
		case Qt::Key_R: 	// escalar a més petit
			angle += float(M_PI/4);
			break;
		default: 
			event->ignore(); 
			break;
	}
	update();
}

void MyGLWidget::mouseMoveEvent (QMouseEvent *event)
{
	makeCurrent();
	if (event->buttons() == Qt::LeftButton && !(event->modifiers() & (Qt::ShiftModifier | Qt::AltModifier | Qt::ControlModifier)))
	{
		int xnew = event->x();
		int ynew = event->y();
		
		if      (rx < xnew) angleEuler[1] += 0.01;
		else if (rx > xnew) angleEuler[1] -= 0.01;
		if      (ry < ynew) angleEuler[0] += 0.01;
		else if (ry > ynew) angleEuler[0] -= 0.01;
		
		viewTransform ();
		update();
		
		rx = xnew;
		ry = ynew;
	}
}
