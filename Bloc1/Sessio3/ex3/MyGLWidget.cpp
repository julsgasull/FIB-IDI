#include "MyGLWidget.h"

#include <iostream>

MyGLWidget::MyGLWidget (QWidget* parent) : QOpenGLWidget(parent), program(NULL)
{
    setFocusPolicy(Qt::StrongFocus);  // per rebre events de teclat
}

MyGLWidget::~MyGLWidget ()
{
    if (program != NULL)
        delete program;
}

void MyGLWidget::initializeGL ()
{
    // Cal inicialitzar l'ús de les funcions d'OpenGL
    initializeOpenGLFunctions();

    glClearColor (0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
    carregaShaders();
    createBuffers();
}

void MyGLWidget::modelTransform()
{
    angle += M_PI/4;
    glm::mat4 TG (1.0); // Matriu de transformació, inicialment identitat
    TG = glm::translate (TG, glm::vec3 (tx, ty, 0.0));  // Translació segons tx, ty
    TG = glm::rotate (TG, angle, glm::vec3 (0.0, 0.0, 1.0));  // Rotació de 45º (M_PI/4 radians)
    glUniformMatrix4fv (transLoc, 1, GL_FALSE, &TG[0][0]);
}

void MyGLWidget::keyPressEvent(QKeyEvent *e)
{
    makeCurrent ();
    switch (e->key()) {
        case Qt::Key_S:
            scl += 0.1;
            glUniform1f (varLoc, scl);
            break;
        case Qt::Key_D:
            scl -= 0.1;
            glUniform1f (varLoc, scl);
            break;
        case Qt::Key_Right:
            tx += 0.1;
            modelTransform();
            break;
        case Qt::Key_Left:
            tx -= 0.1;
            modelTransform();
            break;
        case Qt::Key_Up:
            ty += 0.1;
            modelTransform();
            break;
        case Qt::Key_Down:
            ty -= 0.1;
            modelTransform();
            break;
        default: e->ignore (); // propagar al pare
    }
    update ();
}

void MyGLWidget::paintGL ()
{
    glClear (GL_COLOR_BUFFER_BIT);  // Esborrem el frame-buffer

    glViewport (0, 0, width(), height()); // Aquesta crida no cal, Qt la fa de forma automàtica amb aquests paràmetres

    // Activem l'Array a pintar
    glBindVertexArray(VAO1);

    // Pintem l'escena
    glDrawArrays(GL_TRIANGLES, 0, 3); //si fossin 2 triangles 3 --> 6

    // Desactivem el VAO
    glBindVertexArray(0);
}

void MyGLWidget::resizeGL (int w, int h)
{
    // Aquí anirà el codi que cal fer quan es redimensiona la finestra
}

void MyGLWidget::createBuffers ()
{
    glm::vec3 Vertices[3];  // Tres vèrtexs amb X, Y i Z
    Vertices[0] = glm::vec3(-1.0, -1.0, 0.0);
    Vertices[1] = glm::vec3(1.0, -1.0, 0.0);
    Vertices[2] = glm::vec3(0.0, 1.0, 0.0);

    glm::vec3 Colors[3];  // Tres color per a cada vèrtex X, Y i Z
    Colors[0] = glm::vec3(1.0, 0.0, 0.0);
    Colors[1] = glm::vec3(0.0, 1.0, 0.0);
    Colors[2] = glm::vec3(0.0, 0.0, 1.0);

    // Creació del Vertex Array Object (VAO) que usarem per pintar
    glGenVertexArrays(1, &VAO1);
    glBindVertexArray(VAO1);

    // Creació del buffer amb les dades dels vèrtexs
    GLuint VBO1;
    glGenBuffers(1, &VBO1);
    glBindBuffer(GL_ARRAY_BUFFER, VBO1);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);

    // Activem l'atribut que farem servir per vèrtex
    glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(vertexLoc);

    // Creació del buffer amb les dades dels colors
    GLuint VBO2;
    glGenBuffers(1, &VBO2);
    glBindBuffer(GL_ARRAY_BUFFER, VBO2);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Colors), Colors, GL_STATIC_DRAW);

    // Activem l'atribut que farem servir per color
    glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(colorLoc);

    // Desactivem el VAO
    glBindVertexArray(0);
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

    // Obtenim identificador per a l'atribut "color" del vertex shader
    colorLoc = glGetAttribLocation (program->programId(), "color");

    // Obtenim identificador pel uniform "val" del vertex shader
    varLoc = glGetUniformLocation (program->programId(), "val");
    glUniform1f(varLoc, scl);

    // Obtenim identificador pel uniform "t" del vertex shader
    transLoc = glGetUniformLocation (program->programId(), "TG");
    glm::mat4 TG (1.0); // Matriu de transformació, inicialment identitat
    glUniformMatrix4fv (transLoc, 1, GL_FALSE, &TG[0][0]);
}
