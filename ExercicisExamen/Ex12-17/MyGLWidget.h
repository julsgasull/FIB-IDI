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

  public slots:
    void changeFOV(int);
    void changeToCameraPatricio(bool);  // Ex16: checkbox per canviar posició camera
    void setRedColorFloor(int);         // Ex17: canviar color terra amb sliders
    void setGreenColorFloor(int);       // Ex17: canviar color terra amb sliders
    void setBlueColorFloor(int);        // Ex17: canviar color terra amb sliders

  signals:
    void updateFOV(int);
    void checkCameraPatricio();         // Ex16: checkbox per canviar posició camera
    void uncheckCameraPatricio();       // Ex16: checkbox per canviar posició camera

  protected:
    virtual void initializeGL ( );                    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void paintGL ( );                         // paintGL - Mètode cridat cada cop que cal refrescar la finestra. Tot el que es dibuixa es dibuixa aqui.
    virtual void resizeGL (int width, int height);    // resizeGL - És cridat quan canvia la mida del widget
    virtual void keyPressEvent (QKeyEvent *event);    // keyPressEvent - Es cridat quan es prem una tecla
    // mouse{Press/Release/Move}Event - Són cridades quan es realitza l'event, corresponent de ratolí
    virtual void mousePressEvent (QMouseEvent *event);
    virtual void mouseReleaseEvent (QMouseEvent *event);
    virtual void mouseMoveEvent (QMouseEvent *event);

  private:
    void createBuffersPatricio ();
    void createBuffersTerraIParet ();
    void carregaShaders ();
    void iniEscena ();
    void iniCamera ();
    void iniFocus ();                   // Ex14: canviar posició focus sobre Patricio1
    void posicioFocus ();               // Ex14: canviar posició focus sobre Patricio1
    void projectTransform ();
    void viewTransform ();
    void modelTransformTerra ();
    void modelTransformPatricio1 ();    // Ex12: dos patricios
    void modelTransformPatricio2 ();    // Ex12: dos patricios
    void calculaCapsaPatricio ();
    void setCameraPatricio ();          // Ex15: canviar posició càmera
    void setCameraInicial ();           // Ex15: canviar posició càmera

    // VAO i VBO names
    GLuint VAO_Patr, VAO_Terra;
    // Program
    QOpenGLShaderProgram *program;
    // uniform locations
    GLuint transLoc, projLoc, viewLoc;
    // attribute locations
    GLuint vertexLoc, normalLoc, matambLoc, matdiffLoc, matspecLoc, matshinLoc;
    GLuint frangesLoc;      // Ex9: pintar franges B/W escena
    GLuint posFocusLoc;     // Ex14: canviar posicio focus sobre Patricio1

    // models
    Model patr;
    // paràmetres calculats a partir de la capsa contenidora del model
    glm::vec3 centreBasePatr;
    float escala1, escala2;
    // posicio Patricio
    glm::vec3 posPatricio1;

    // Ex9: pintar escena franges blanques i negres
    bool franges;
    // Ex14: canviar posicio focus sobre Patricio1
    glm::vec3 posFocus;
    // Ex15: canviar posicio càmera
    bool cameraPatricio;
    // Ex17: canviar color terra amb sliders
    float R, G, B;

    // camera perspectiva - ortogonal
    bool perspectiva;

    typedef  enum {NONE, ROTATE, ZOOM} InteractiveAction;
    InteractiveAction DoingInteractive;
    int xClick, yClick;

    // Ex1: iniCamera i resizeGL
    glm::vec3 Pmin, Pmax;
    glm::vec3 centreEsc;
    glm::vec3 VRP, OBS, UP;                     // Ex7: canviar camera perspectiva
    float radi, dist;
    float znear, zfar;
    float FOV, alfaIni, raV;                   // Càmera perspectiva
    float left, right, bottom, top;             // Càmera ortogonal

    // Ex1: Angles Euler
    glm::vec3 angleEuler;
};
