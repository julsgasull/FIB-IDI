#define GLM_FORCE_RADIANS
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QKeyEvent>
#include <QMouseEvent>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

#include "model.h"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core 
{
  Q_OBJECT

  public:
    MyGLWidget (QWidget *parent=0);
    ~MyGLWidget ();

  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ( );
    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    virtual void paintGL ( );
    // resizeGL - És cridat quan canvia la mida del widget
    virtual void resizeGL (int width, int height);
    // keyPressEvent - Es cridat quan es prem una tecla
    virtual void keyPressEvent (QKeyEvent *event);

  private:
    void createBuffersModel ();
    void createBuffersTerra ();
    void carregaShaders ();
    void projectTransform ();
    void viewTransform ();
    void modelTransformTerra ();
    void modelTransformPatricio ();
    void calculaCapsaModel ();
    void iniCamera ();
    
    
    // Added functions
    void cameraZero ();	
    void cameraOne ();
    void cameraTwo ();
    void cameraThree ();
    void cameraFour ();

    // VAO i VBO names
    GLuint VAO_Patr;
    GLuint VAO_Terra;
    // Program
    QOpenGLShaderProgram *program;
    // uniform locations
    GLuint transLoc, projLoc, viewLoc;
    // attribute locations
    GLuint vertexLoc, colorLoc;

    // model
    Model patr;
    // paràmetres calculats a partir de la capsa contenidora del model
    glm::vec3 centreBasePatr;
    float escala;
    
    
    // Added vars part 1
    glm::vec3 Pmin = glm::vec3( 0.0, 0.0, 0.0);
	glm::vec3 Pmax = glm::vec3( 5.0, 2.0, 5.0);
	glm::vec3 angleEuler = glm::vec3(((float)M_PI/9.0), ((float)M_PI/4.0), 0.0);
	GLfloat r, d;
	glm::vec3 VRP, OBS, UP;
	GLfloat FOV, alfaIni, raV, znear, zfar;
	
	// Added vars part 2
	bool euler; // just for camera 0; {1, 2, 3, 4} with lookAt
	glm::vec3 centrePatricio = glm::vec3( 4.0, 1.0, 3.5);
	
};
    
