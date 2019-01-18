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
	carregaHomer ();
	carregaTerra ();
	glBindVertexArray (0);
}

void MyGLWidget::carregaHomer ()
{
	// Carregar model
	homer.load("./models/HomerProves.obj");
	
	// Activar VAO model
	glGenVertexArrays(1, &VAO_Homer);
	glBindVertexArray(VAO_Homer);
	
	// Posició model
	glGenBuffers(1, &VBO_HomerPos);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_HomerPos);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat)*homer.faces().size()*3*3, homer.VBO_vertices(), GL_STATIC_DRAW);
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);
	
	// Color model
	glGenBuffers(1, &VBO_HomerCol);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_HomerCol);
	glBufferData(GL_ARRAY_BUFFER,sizeof(GLfloat)*homer.faces().size()*3*3, homer.VBO_matdiff(), GL_STATIC_DRAW);
	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);
}

void MyGLWidget::carregaTerra ()
{
	// Carregar dades
	glm::vec3 posterra[4] = 
	{
		glm::vec3(-1.0, -1.0, -1.0),
		glm::vec3(-1.0, -1.0,  1.0),
		glm::vec3( 1.0, -1.0, -1.0),
		glm::vec3( 1.0, -1.0,  1.0)
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
	// Pmin
	Pmin[0] = -1.0;
	Pmin[1] = -1.0;
	Pmin[2] = -1.0;
	// Pmax
	Pmax[0] =  1.0;
	Pmax[1] =  1.0;
	Pmax[2] =  1.0;
	// VRP
        VRP[0] = (Pmin[0]+Pmax[0]) /2.0;
        VRP[1] = (Pmin[1]+Pmax[1]) /2.0,
        VRP[2] = (Pmin[2]+Pmax[2]) /2.0;
	// Radi (igual amb Pmax)
	r = sqrt(	(Pmin[0]-VRP[0])*(Pmin[0]-VRP[0]) + 
				(Pmin[1]-VRP[1])*(Pmin[1]-VRP[1]) + 
				(Pmin[2]-VRP[2])*(Pmin[2]-VRP[2]) );
	// d (> r)
	d = 1.5*r;
	// OBS
	OBS   = VRP + d*glm::vec3(0.0, 0.0, 1.0);
	// UP (per defecte)
	UP = glm::vec3(0,1,0);	 
	// funció
	viewTransform();
	
	/*--------------------- PROJECTION ---------------------*/
	// FOV (canvia al resize)
	FOV = 2 * asin(r/d);
	// ra
	ra = 1.0;
	// Znear i Zfar
	znear = d - r;
	zfar = d + r;
	// funció
	projectTransform();
}

void MyGLWidget::viewTransform ()
{
	glm::mat4 View = glm::lookAt (OBS, VRP, UP);
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
	modelTransformHomer (); 
	glBindVertexArray (VAO_Homer);
	glDrawArrays (GL_TRIANGLES, 0, homer.faces().size()*3);

	modelTransformTerra (); 
	glBindVertexArray (VAO_Terra);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
	
	// desactivar
	glBindVertexArray (0);
}

void MyGLWidget::modelTransformHomer () 
{
	glm::mat4 transform (1.0f);
	transform = glm::rotate(transform, angle, glm::vec3(0.0,1.0,0.0));
	transform = glm::scale(transform, glm::vec3(scale));
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
		case Qt::Key_S: { // escalar a més gran
			scale += 0.05;
			break;
		}
		case Qt::Key_D: { // escalar a més petit
			scale -= 0.05;
			break;
		}
		case Qt::Key_R: { // escalar a més petit
			angle += float(M_PI/4);
			break;
		}
		default: 
		{
			event->ignore(); 
			break;
		}
	}
	update();
}

