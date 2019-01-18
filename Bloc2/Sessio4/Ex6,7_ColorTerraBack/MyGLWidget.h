#define GLM_FORCE_RADIANS
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QKeyEvent>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "./Model/model.h"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
	Q_OBJECT

	public:
		MyGLWidget (QWidget *parent=0);
		~MyGLWidget ();

	public slots:
			void changeFOV(int);
			void changeScale(double);
			void changePsi(int); 			void changeTheta(int);
			void paintLegoman(); 			void paintPatricio();
			void setOrthogonal(); 		void setPerspective();
			void changeRedFloor(int);	void changeGreenFloor(int);	void changeBlueFloor(int);
			void changeRedBack(int); 	void changeGreenBack(int); 	void changeBlueBack(int);
	signals:
			void setScaleChanged(double);
			void setEulerAngleChangedPsi(int);
			void setEulerAngleChangedTheta(int);

	protected:
		virtual void initializeGL ( );	// Aqui incluim les inicialitzacions del contexte grafic.
		virtual void paintGL ( );  // Mètode cridat cada cop que cal refrescar la finestra.
		virtual void resizeGL (int width, int height); // És cridat quan canvia la mida del widget
		virtual void keyPressEvent (QKeyEvent *event); // És cridat quan es prem una tecla
		virtual void mouseMoveEvent (QMouseEvent *event); // Es cridat quan es mou el mouse
		virtual void mousePressEvent (QMouseEvent *event);
	private:
		/* -----------------------------------------*/
		/* --------------- Functions ---------------*/
		/* -----------------------------------------*/
		// initializeGL
		void carregaShaders (); void createBuffers ();
		void carregaPatricio (); void carregaLegoman (); void carregaTerra ();
		void ini_camera ();
		void calculaBaseCapsaPatricio (); void calculaBaseCapsaLegoman ();
		void viewTransform (); void projectTransform ();
		// paintGL
		void modelTransformPatricio (); void modelTransformLegoman (); void modelTransformTerra ();
		void setColorTerra();

		/* -----------------------------------------*/
		/* -------------- Locations  ---------------*/
		/* -----------------------------------------*/
		GLuint 		vertexLoc, colorLoc;											// attribute locations
		GLuint 		transLoc, projLoc, viewLoc; 							// uniform locations

		/* -----------------------------------------*/
		/* ------------- Internal vars -------------*/
		/* -----------------------------------------*/
		float 		scale;
		glm::vec3	pos;
		GLfloat 	angle;

		/* -----------------------------------------*/
		/* ------------- Parts escena --------------*/
		/* -----------------------------------------*/

		// escena general
		GLfloat 	radi, d;
		glm::vec3	Pmin, Pmax;
		glm::vec3	VRP, OBS, UP;
		glm::vec3 angleEuler;
		float 		FOV, alfaIni, raV, znear, zfar;
		float 		rx, ry;																		// per events
		float 		left, right, bottom, top;									// per orthogonal
		bool  		persp;																		// si true, camera perspectiva si no, ortho

		// Patricio
		Model  		patricio;
		GLuint 		VAO_Patricio;															// VAO
		GLuint 		VBO_PatricioPos, VBO_PatricioCol;					// VBO
		glm::vec3 centreBaseCapsaPatricio;									// centreBaseCapsa
		GLfloat 	alturaPatricio;														// altura
		bool 			boolModelPatricio;												// si true, tenim patricio. si no, legoman

		// Legoman
		Model  		legoman;
		GLuint 		VAO_Legoman;															// VAO
		GLuint 		VBO_LegomanPos, VBO_LegomanCol;						// VBO
		glm::vec3	centreBaseCapsaLegoman;										// centreBaseCapsa
		GLfloat 	alturaLegoman;														// altura

		// Terra
		GLuint 		VAO_Terra;																// VAO
		GLuint 		VBO_TerraPos, VBO_TerraCol;								// VBO

		QOpenGLShaderProgram *program;											// Shader

		float redColorFloor,	greenColorFloor,	blueColorFloor;
		float redColorBack, 	greenColorBack, 	blueColorBack;
};
