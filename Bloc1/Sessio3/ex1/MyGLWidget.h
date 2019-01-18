#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QKeyEvent>
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

    // Augmentar o disminuir la mida de l'objecte a partir del teclat
    virtual void keyPressEvent (QKeyEvent *e);

    // Construir la matriu de transformació
    virtual void modelTransform();

  private:
    void createBuffers ();
    void carregaShaders ();

    // attribute locations
    GLuint vertexLoc;
    GLuint varLoc;
    GLuint transLoc;

    // uniform values
    float scl = 0.5;
    float tx = 0.0;
    float ty = 0.0;

    // Program
    QOpenGLShaderProgram *program;

    // VAO's
    GLuint VAO1;
};
