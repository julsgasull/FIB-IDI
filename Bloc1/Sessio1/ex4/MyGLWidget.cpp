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

void MyGLWidget::paintGL ()
{
  glClear (GL_COLOR_BUFFER_BIT);  // Esborrem el frame-buffer

  //-------VAO1-------//
  glViewport (0, 0, width()/2, height()/2);
  glBindVertexArray(VAO1); // Activem l'Array a pintar 
  glDrawArrays(GL_TRIANGLES, 0, 6);   // Pintem l'escena
  glBindVertexArray(0);   // Desactivem el VAO
  
  //-------VAO2-------//
  glViewport (width()/2, height()/2, width()/2, height()/2); 
  glBindVertexArray(VAO2); // Activem l'Array a pintar 
  glDrawArrays(GL_TRIANGLES, 0, 3);   // Pintem l'escena
  glBindVertexArray(0);   // Desactivem el VAO
  
  //-------VAO2 sobre -------//
  glViewport (0, height()/2, width()/2, height()/2); 
  glBindVertexArray(VAO2); // Activem l'Array a pintar 
  glDrawArrays(GL_TRIANGLES, 0, 3);   // Pintem l'escena
  glBindVertexArray(0);   // Desactivem el VAO
}

void MyGLWidget::resizeGL (int w, int h)
{
  // Aquí anirà el codi que cal fer quan es redimensiona la finestra
}

void MyGLWidget::createBuffers ()
{
  glm::vec3 Vertices1[6];  // Tres vèrtexs amb X, Y i Z
  Vertices1[0] = glm::vec3(-1.0,-1.0, 0.0);
  Vertices1[1] = glm::vec3(-1.0, 1.0, 0.0);
  Vertices1[2] = glm::vec3( 1.0,-1.0, 0.0);
  Vertices1[3] = glm::vec3(-1.0, 1.0, 0.0);
  Vertices1[4] = glm::vec3( 1.0, 1.0, 0.0);
  Vertices1[5] = glm::vec3( 1.0,-1.0, 0.0);
  
  glm::vec3 Vertices2[3];  // Tres vèrtexs amb X, Y i Z
  Vertices2[0] = glm::vec3(-1.0,-1.0, 0.0);
  Vertices2[1] = glm::vec3( 1.0,-1.0, 0.0);
  Vertices2[2] = glm::vec3( 0.0, 1.0, 0.0);
  
  
  //-------VAO1-------//
  // Creació del Vertex Array Object (VAO) que usarem per pintar
  glGenVertexArrays(1, &VAO1);
  glBindVertexArray(VAO1);
  // Creació del buffer amb les dades dels vèrtexs
  GLuint VBO1;
  glGenBuffers(1, &VBO1);
  glBindBuffer(GL_ARRAY_BUFFER, VBO1);
  glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices1), Vertices1, GL_STATIC_DRAW);
  // Activem l'atribut que farem servir per vèrtex	
  glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);
  // Desactivem el VAO
  glBindVertexArray(0);
  
  //-------VAO2-------//  
  // Creació del Vertex Array Object (VAO) que usarem per pintar
  glGenVertexArrays(1, &VAO2);
  glBindVertexArray(VAO2);
  // Creació del buffer amb les dades dels vèrtexs
  GLuint VBO2;
  glGenBuffers(1, &VBO2);
  glBindBuffer(GL_ARRAY_BUFFER, VBO2);
  glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices2), Vertices2, GL_STATIC_DRAW);
  // Activem l'atribut que farem servir per vèrtex	
  glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);
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
}
