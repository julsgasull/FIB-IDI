#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QKeyEvent>
#include <QMouseEvent>

#define GLM_FORCE_RADIANS

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
  Q_OBJECT

  public:
    MyGLWidget (QWidget *parent=0);
    ~MyGLWidget ();

  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ();

    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ();

    // resize - Es cridat quan canvia la mida del widget
    virtual void resizeGL (int width, int height);

    // Interactuar amb l'objecte a partir del teclat
    virtual void keyPressEvent (QKeyEvent *e);

    // Construir la matriu de transformació
    virtual void modelTransformT1();

    // Construir la matriu de transformació
    virtual void modelTransformT2();

  private:
    void createBuffers ();
    void carregaShaders ();

    // attribute locations
    GLuint vertexLoc;
    GLuint colorLoc;
    GLuint transLoc;

    // angle values
    float angleT1 = 0.0;
    float angleT2 = 0.0;

    // Program
    QOpenGLShaderProgram *program;

    // VAO's
    GLuint VAO1;
};
