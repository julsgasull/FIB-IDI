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
    virtual void initializeGL ();                     // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void paintGL ();                          // paintGL - Mètode cridat cada cop que cal refrescar la finestra. Tot el que es dibuixa es dibuixa aqui.
    virtual void resizeGL (int width, int height);    // resizeGL - És cridat quan canvia la mida del widget
    virtual void keyPressEvent (QKeyEvent *event);    // keyPressEvent - Es cridat quan es prem una tecla
    // mouse{Press/Release/Move}Event - Són cridades quan es realitza l'event corresponent de ratolí
    virtual void mousePressEvent (QMouseEvent *event); virtual void mouseReleaseEvent (QMouseEvent *event); virtual void mouseMoveEvent (QMouseEvent *event);

  private:
    void iniEscena (); void iniCamera (); void iniFocus (); void posicioFocus (); void changeFocusType();
    void createBuffersModel (); void createBuffersTerraIParet (); void carregaShaders (); void calculaCapsaModel ();
    void projectTransform (); void viewTransform (); void modelTransformTerra (); void modelTransformModel1 (); void modelTransformModel2 ();


    GLuint VAO_Patr, VAO_Terra;                                     // VAO names
    QOpenGLShaderProgram *program;                                  // Program
    GLuint transLoc, projLoc, viewLoc, posFocusLoc0, posFocusLoc1, posFocusLoc2, focusTypeLoc;   // uniform locations
    GLuint vertexLoc, normalLoc, matambLoc, matdiffLoc, matspecLoc, matshinLoc;

    Model patr;     // model
    // paràmetres calculats a partir de la capsa contenidora del model
    glm::vec3 centreBasePatr; float escala1, escala2;
    float radiEsc;  // radi de l'escena

    typedef enum {NONE, ROTATE} InteractiveAction;
    InteractiveAction DoingInteractive;
    int xClick, yClick;
    bool perspectiva;

    glm::vec3 Pmin, Pmax;
    GLfloat radi, dist;
    glm::vec3 VRP, OBS, UP;
    float FOV, alfaIni, raV, znear, zfar;
    glm::vec3 angleEuler;
    float left, right, bottom, top;

    int focusT; // {0 = camera, 1 = sobre patricio1, 2 = sobre patricio2}
    glm::vec3 posF0, posF1, posF2;  // posicions focus
    glm::vec3 posM1, posM2;         // posicions models
};
