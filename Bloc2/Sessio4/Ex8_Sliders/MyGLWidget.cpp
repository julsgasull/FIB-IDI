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
	Pmin = glm::vec3(-2.5, 0.0,-2.5); Pmax = glm::vec3( 2.5, 2.0, 2.5);
	angle = 0.0; scale = 1.0f;
	angleEuler = glm::vec3(0.0, 0.0, 0.0);
	boolModelPatricio = true; persp = true;
	redColorFloor = 217.0/255.0; 	greenColorFloor = 192.0/255.0; 	blueColorFloor = 176.0/255;
	redColorBack = 64.0/255.0; 	greenColorBack = 63.0/255.0; 	blueColorBack = 76.0/255.0; //redColorBack = 0.5; 	greenColorBack = 0.7; 	blueColorBack = 1.0;
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//newWidth = width()*2; newHeight = height()*2; //!!!!!!!!!!!!! al lab no es multiplica per 2 !!!!!!!!!!!!!!!!!
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//GLint vp[4]; glGetIntegerv(GL_VIEWPORT, vp); newWidth = vp[2]; newHeight = vp[3];
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
	glClearColor (redColorBack, greenColorBack, blueColorBack, 1.0); // defineix color de fons (d'esborrat)
	glEnable (GL_DEPTH_TEST);

	carregaShaders ();
	createBuffers ();
	ini_camera ();

	newWidth = width();             // amplada inicial l'amplada del viewport
	newHeight = height();           // amplada inicial l'altura del viewport
}

void MyGLWidget::carregaShaders()
{
	// Creem els shaders per al fragment shader i el vertex shader
	QOpenGLShader fs (QOpenGLShader::Fragment, this);
	QOpenGLShader vs (QOpenGLShader::Vertex, this);

	// Carreguem el codi dels fitxers i els compilem
	fs.compileSourceFile("shaders/fragshad.frag");
	vs.compileSourceFile("shaders/vertshad.vert");

	program = new QOpenGLShaderProgram(this); // Creem el program

	// Li afegim els shaders corresponents
	program->addShader(&fs);
	program->addShader(&vs);

	program->link(); // Linkem el program

	program->bind(); // Indiquem que aquest és el program que volem usar

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
	carregaLegoman ();
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
	alturaPatricio = PmaxPatricio[1]-PminPatricio[1];
	centreBaseCapsaPatricio = glm::vec3((PmaxPatricio[0]+PminPatricio[0])/2, PminPatricio[1], (PmaxPatricio[2]+PminPatricio[2])/2);
}

void MyGLWidget::carregaLegoman ()
{
	// Carregar model
	legoman.load("./models/legoman.obj");
	calculaBaseCapsaLegoman ();

	// Activar VAO model
	glGenVertexArrays(1, &VAO_Legoman);
	glBindVertexArray(VAO_Legoman);

	// Posició model
	glGenBuffers(1, &VBO_LegomanPos);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_LegomanPos);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat)*legoman.faces().size()*3*3, legoman.VBO_vertices(), GL_STATIC_DRAW);
	glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexLoc);

	// Color model
	glGenBuffers(1, &VBO_LegomanCol);
	glBindBuffer(GL_ARRAY_BUFFER, VBO_LegomanCol);
	glBufferData(GL_ARRAY_BUFFER,sizeof(GLfloat)*legoman.faces().size()*3*3, legoman.VBO_matdiff(), GL_STATIC_DRAW);
	glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorLoc);
}

void MyGLWidget::calculaBaseCapsaLegoman ()
{
	glm::vec3 PminLegoman, PmaxLegoman;
	// iniciem per al bucle:
	// PminLegoman
	PminLegoman[0] = legoman.vertices()[0];
	PminLegoman[1] = legoman.vertices()[1];
	PminLegoman[2] = legoman.vertices()[2];
	// PmaxLegoman
	PmaxLegoman[0] = legoman.vertices()[0];
	PmaxLegoman[1] = legoman.vertices()[1];
	PmaxLegoman[2] = legoman.vertices()[2];

	// bucle:
	int size = legoman.vertices().size();
	for (int i = 3; i < size; i += 3)
	{
		// auxiliars
		float forX = legoman.vertices()[i];
		float forY = legoman.vertices()[i + 1];
		float forZ = legoman.vertices()[i + 2];
		// Pmin
		PminLegoman[0] = min(PminLegoman[0], forX);
		PminLegoman[1] = min(PminLegoman[1], forY);
		PminLegoman[2] = min(PminLegoman[2], forZ);
		// Pmax
		PmaxLegoman[0] = max(PmaxLegoman[0], forX);
		PmaxLegoman[1] = max(PmaxLegoman[1], forY);
		PmaxLegoman[2] = max(PmaxLegoman[2], forZ);
	}
	alturaLegoman = PmaxLegoman[1]-PminLegoman[1];
	centreBaseCapsaLegoman = glm::vec3((PmaxLegoman[0]+PminLegoman[0])/2, PminLegoman[1], (PmaxLegoman[2]+PminLegoman[2])/2);
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
		glm::vec3(redColorFloor, greenColorFloor, blueColorFloor),
		glm::vec3(redColorFloor, greenColorFloor, blueColorFloor),
		glm::vec3(redColorFloor, greenColorFloor, blueColorFloor),
		glm::vec3(redColorFloor, greenColorFloor, blueColorFloor)
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
	radi = sqrt
	(
		(Pmin[0]-VRP[0])*(Pmin[0]-VRP[0]) +
		(Pmin[1]-VRP[1])*(Pmin[1]-VRP[1]) +
		(Pmin[2]-VRP[2])*(Pmin[2]-VRP[2])
	);
	// d (> r)
	d = 2*radi;
	// OBS
	OBS = VRP + d*glm::vec3(0.0, 0.0, 1.0);
	// UP (per defecte)
	UP = glm::vec3(0.0, 1.0, 0.0);
	// funció
	viewTransform();

	/*--------------------- PROJECTION ---------------------*/

	alfaIni = asin(radi/d); FOV = 2 * alfaIni;	// FOV (canvia al resize)
	// raV al resize
	znear = d - radi;	// Znear
	zfar  = d + radi;	// Zfar
	// funció projectTransform();

	right  =  radi;
	left   = -radi;
	top    =  radi;
	bottom = -radi;
}

void MyGLWidget::viewTransform ()
{
	//glm::mat4 View = glm::lookAt (OBS, VRP, UP);
	glm::mat4 View (1.0f);
	View = glm::translate(View, glm::vec3(0.0, 0.0, -d));
	View = glm::rotate(View, -angleEuler[2], glm::vec3(0.0, 0.0, 1.0));		// phy z
	View = glm::rotate(View,  angleEuler[0], glm::vec3(1.0, 0.0, 0.0)); 	// theta x
	View = glm::rotate(View, -angleEuler[1], glm::vec3(0.0, 1.0, 0.0)); 	// psi y
	View = glm::translate(View, -VRP);
	glUniformMatrix4fv (viewLoc, 1, GL_FALSE, &View[0][0]);
}

void MyGLWidget::projectTransform ()
{
	glm::mat4 Proj (1.0f);

	if (persp) Proj = glm::perspective (FOV, raV, znear, zfar);
	else       Proj = glm::ortho (left, right, bottom, top, znear, zfar);

	glUniformMatrix4fv (projLoc, 1, GL_FALSE, &Proj[0][0]);
}

/*------------------------------------------------------------------------------------*/
/*-------------------------------------- PINTAR --------------------------------------*/
/*------------------------------------------------------------------------------------*/

void MyGLWidget::paintGL ()
{

	glViewport (0, 0, newWidth, newHeight);  // viewport segons sliders

	emit setWidthInitValue(newWidth); emit setHeightInitValue(newHeight);

	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Esborrem el frame-buffer

	if (boolModelPatricio)
	{
		// Pintar patricio (h = 2, base = ( 0, 0, 0), Z+)
		modelTransformPatricio (); glBindVertexArray (VAO_Patricio);
		glDrawArrays (GL_TRIANGLES, 0, patricio.faces().size()*3);
	} else
	{
		// Pintar legoman (h = 2, base = ( 0, 0, 0), Z+)
		modelTransformLegoman (); glBindVertexArray (VAO_Legoman);
		glDrawArrays (GL_TRIANGLES, 0, legoman.faces().size()*3);
	}

	// Pintar terra
	modelTransformTerra (); glBindVertexArray (VAO_Terra);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glBindVertexArray (0);	// desactivar
}


void MyGLWidget::modelTransformPatricio ()
{
	glm::mat4 transform (1.0f);
	transform = glm::scale(transform, glm::vec3(scale));
	transform = glm::translate(transform, glm::vec3(0.0, 0.0, 0.0));										// ( 0, 0, 0) no fa falta perquè ja hi és
	transform = glm::rotate(transform, angle, glm::vec3(0.0, 1.0, 0.0));
	transform = glm::rotate(transform, 0.f, glm::vec3(0.0, 1.0, 0.0));									// mira cap a Z+
	transform = glm::scale(transform, glm::vec3(2.0/alturaPatricio, 2.0/alturaPatricio, 2.0/alturaPatricio));  	// altura = 2
	transform = glm::translate(transform, -centreBaseCapsaPatricio);										// ( 0, 0, 0)
	glUniformMatrix4fv(transLoc, 1, GL_FALSE, &transform[0][0]);
}

void MyGLWidget::modelTransformLegoman ()
{
	glm::mat4 transform (1.0f);
	transform = glm::scale(transform, glm::vec3(scale));
	transform = glm::translate(transform, glm::vec3(0.0, 0.0, 0.0));										// ( 0, 0, 0) no fa falta perquè ja hi és
	transform = glm::rotate(transform, angle, glm::vec3(0.0, 1.0, 0.0));
	transform = glm::rotate(transform, 0.f, glm::vec3(0.0, 1.0, 0.0));									// mira cap a Z+
	transform = glm::scale(transform, glm::vec3(2.0/alturaLegoman, 2.0/alturaLegoman, 2.0/alturaLegoman));  	// altura = 2
	transform = glm::translate(transform, -centreBaseCapsaLegoman);										// ( 0, 0, 0)
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
{ //glViewport (0, 0, w, h);	 		// viewport inicial
  raV = float (w) / float (h);		// raV

	// canviar rang slider segons el viewport
	emit setRangeSliderWidth(0,w); emit setRangeSliderHeight(0,h);

  if (persp)
  {
		if (raV < 1.0) FOV = 2.0*atan(tan(alfaIni)/raV);
		else FOV = alfaIni*2;
	} else
	{
		if (raV > 1.0)
		{
			left  = -radi*raV;
			right =  radi*raV;
		} else
		{
			bottom = -radi/raV;
			top    =  radi/raV;
		}
	}
  projectTransform();	    			// funció
}

/*------------------------------------------------------------------------------------*/
/*-------------------------------------- EVENTS --------------------------------------*/
/*------------------------------------------------------------------------------------*/

void MyGLWidget::keyPressEvent(QKeyEvent* event)
{
  makeCurrent();
  switch (event->key())
  {
    case Qt::Key_R: // rotate model
      angle += M_PI/4;
      break;
    case Qt::Key_S:  // escalar a més gran
      scale += 0.05;
      emit setScaleChanged(scale);
      break;
    case Qt::Key_D:  // escalar a més petit
      scale -= 0.05;
      emit setScaleChanged(scale);
      break;
    default: event->ignore(); break;
  }
  update();
}

void MyGLWidget::mousePressEvent (QMouseEvent *event)
{
	rx = event->x();
	ry = event->y();
}

void MyGLWidget::mouseMoveEvent (QMouseEvent *event)
{
	makeCurrent();
	// MOURE CLIK ESQUERRA
	if (event->buttons() == Qt::LeftButton && !(event->modifiers() & (Qt::ShiftModifier | Qt::AltModifier | Qt::ControlModifier)))
	{
		int xnew = event->x();
		int ynew = event->y();

		if (rx < xnew)	// psi
		{
			angleEuler[1] += 0.01;
			emit setEulerAngleChangedPsi(int(angleEuler[1]*100));
		} else if (rx > xnew)
		{
			angleEuler[1] -= 0.01;
			emit setEulerAngleChangedPsi(int(angleEuler[1]*100));
		}

		if (ry < ynew)	// theta
		{
			angleEuler[0] += 0.01;
			emit setEulerAngleChangedTheta(int(angleEuler[0]*100));
		} else if (ry > ynew)
		{
			angleEuler[0] -= 0.01;
			emit setEulerAngleChangedTheta(int(angleEuler[0]*100));
		}

		viewTransform ();

		update();

		rx = xnew;
		ry = ynew;
	}
	// ZOOM CLICK DRET
	if (event->buttons() == Qt::RightButton && !(event->modifiers() & (Qt::ShiftModifier | Qt::AltModifier | Qt::ControlModifier)))
	{
		int ynew = event->y();

		if (ry > ynew and (FOV - 0.1/((ynew-ry)) >         0.0)) FOV -= 0.1/((ry-ynew));	// si pujo mouse -> zoom in
		if (ry < ynew and (FOV + 0.1/((ynew-ry)) < (float)M_PI)) FOV += 0.1/((ynew-ry)); 	// si baixo mouse -> zoom out

		projectTransform();
		update();

		ry = ynew;
		alfaIni = FOV/2;
	}
}

/*------------------------------------------------------------------------------------*/
/*--------------------------------------- SLOTS --------------------------------------*/
/*------------------------------------------------------------------------------------*/

// FOV
void MyGLWidget::changeFOV(int i)
{
	makeCurrent();
	FOV = ((float)i * (float)M_PI) / (float)180;
	projectTransform();
	update();
}

// Models
void MyGLWidget::paintPatricio()
{
  makeCurrent();
  boolModelPatricio = true;
  paintGL();
  update();
}
void MyGLWidget::paintLegoman()
{
  makeCurrent();
  boolModelPatricio = false;
  paintGL();
  update();
}

// Scale
void MyGLWidget::changeScale(double i)
{
  makeCurrent();
  scale = (float)i;
  update();
}

// perspective
void MyGLWidget::setOrthogonal()
{
  makeCurrent();
  persp = false; resizeGL(width(), height());
  update();
}
void MyGLWidget::setPerspective()
{
  makeCurrent();
  persp = true;
  projectTransform();
  update();
}

// Euler
void MyGLWidget::changePsi(int i)
{
  makeCurrent();
  angleEuler[1] = (float)i/100.0;
  viewTransform();
  update();
}
void MyGLWidget::changeTheta(int i)
{
  makeCurrent();
  angleEuler[0] = (float)i/100.0;
  viewTransform();
  update();
}

// Floor color
void MyGLWidget::changeRedFloor(int i)
{
	makeCurrent();
	redColorFloor = float(i)/255.0; carregaTerra();
	update();
}
void MyGLWidget::changeGreenFloor(int i)
{
	makeCurrent();
	greenColorFloor = float(i)/255.0; carregaTerra();
	update();
}
void MyGLWidget::changeBlueFloor(int i)
{
	makeCurrent();
	blueColorFloor = float(i)/255.0; carregaTerra();
	update();
}

// Background color
void MyGLWidget::changeRedBack(int i)
{
	makeCurrent();
	redColorBack = float(i)/255.0; glClearColor (redColorBack, greenColorBack, blueColorBack, 1.0);
	update();
}
void MyGLWidget::changeGreenBack(int i)
{
	makeCurrent();
	greenColorBack = float(i)/255.0; glClearColor (redColorBack, greenColorBack, blueColorBack, 1.0);
	update();
}
void MyGLWidget::changeBlueBack(int i)
{
	makeCurrent();
	blueColorBack = float(i)/255.0; glClearColor (redColorBack, greenColorBack, blueColorBack, 1.0);
	update();
}

// sliders viewport
void MyGLWidget::setWidth(int i)
{
	makeCurrent();
	newWidth = i; paintGL();
	update();
}
void MyGLWidget::setHeight(int i)
{
	makeCurrent();
	newHeight = i; paintGL();
	update();
}
