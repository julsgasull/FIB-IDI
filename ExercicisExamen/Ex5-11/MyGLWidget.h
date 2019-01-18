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
    MyGLWidget  (QWidget *parent=0);
    ~MyGLWidget ();

  public slots:
    void changeFOV          (int);
    void setFocusCam 	    (   );
    void setFocusEscena     (   );
  signals:
    void signalChangeFOV    (int);
    void signalSetFocusCam  (   );
    void signalSetFocusEscena ( );

  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ( );
    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ( );
    // resizeGL - És cridat quan canvia la mida del widget
    virtual void resizeGL (int width, int height);
    // keyPressEvent - Es cridat quan es prem una tecla
    virtual void keyPressEvent (QKeyEvent *event);
    // mouse{Press/Release/Move}Event - Són cridades quan es realitza l'event
    // corresponent de ratolí
    virtual void mousePressEvent    (QMouseEvent *event);
    virtual void mouseReleaseEvent  (QMouseEvent *event);
    virtual void mouseMoveEvent     (QMouseEvent *event);

  private:
    void createBuffersPatricio (); void createBuffersVaca ();
    void createBuffersTerraIParet ();
    void carregaShaders ();
    void iniEscena ();
    void iniCamera ();
    void projectTransform ();
    void viewTransform ();
    void modelTransformTerra ();
    void modelTransformPatricio (); void modelTransformVaca ();
    void calculaCapsaModelPatricio (); void calculaCapsaModelVaca ();
    void iniFocus(); void posicioFocus(); void colorFocus(); void llumAmbient(); void defineFocus();

    // VAO i VBO names
    GLuint VAO_Patr;
    GLuint VAO_Vaca;
    GLuint VAO_Terra;
    // Program
    QOpenGLShaderProgram *program;
    // uniform locations
    GLuint transLoc, projLoc, viewLoc, pintaVacaLoc, teclaXLoc, teclaLLoc;
    // attribute locations
    GLuint vertexLoc, normalLoc, matambLoc, matdiffLoc, matspecLoc, matshinLoc;

    // model
    Model patr;
    Model vaca;
    // paràmetres calculats a partir de la capsa contenidora del model
    glm::vec3 centrePatr, centreVaca;
    float escalaPatr, escalaVaca;
    // radi de l'escena
    float radiEsc;

    typedef  enum {NONE, ROTATE} InteractiveAction;
    InteractiveAction DoingInteractive;
    int xClick, yClick;
    // float angleY;
    bool perspectiva;


    glm::vec3   Pmin, Pmax;
    GLfloat     radi, dist;
    glm::vec3   VRP, OBS, UP;
    float       FOV, alfaIni, raV, znear, zfar;
    glm::vec3   angleEuler;
    float       left, right, bottom, top;

    float angleTeclaR;
    glm::vec3 centrePatrCurrent;

    int teclaX, teclaL;
};
