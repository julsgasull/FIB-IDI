/*--------------------------*/
/*---- MyPushButton.cpp ----*/
/*--------------------------*/

#include "MyPushButton.h"

MyPushButton::MyPushButton(QWidget *parent):QPushButton(parent)
{
  this->setStyleSheet("background-color: black;");
  random = rand();
}

void MyPushButton::setRandom()
{
  random = rand();
  this->setStyleSheet("background-color: black;");
}

void MyPushButton::changeColor(int i)
{
  int color = random + i;
  if      ((color  ) % 4 == 0) this->setStyleSheet("background-color: magenta");
  else if ((color+1) % 4 == 0) this->setStyleSheet("background-color: green");
  else if ((color+2) % 4 == 0) this->setStyleSheet("background-color: blue");
  else                         this->setStyleSheet("background-color: black");
}
