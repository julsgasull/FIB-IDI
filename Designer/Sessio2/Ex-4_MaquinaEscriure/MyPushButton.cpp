/*--------------------------*/
/*---- MyPushButton.cpp ----*/
/*--------------------------*/

#include "MyPushButton.h"

MyPushButton::MyPushButton(QWidget *parent):QPushButton(parent)
{
  capitals = false;
}

void MyPushButton::sendTextA()
{
  if (capitals) emit sendTextSignal("A");
  else          emit sendTextSignal("a");
}
void MyPushButton::sendTextE()
{
  if (capitals) emit sendTextSignal("E");
  else          emit sendTextSignal("e");
}
void MyPushButton::sendTextI()
{
  if (capitals) emit sendTextSignal("I");
  else          emit sendTextSignal("i");
}
void MyPushButton::sendTextO()
{
  if (capitals) emit sendTextSignal("O");
  else          emit sendTextSignal("o");
}
void MyPushButton::sendTextU()
{
  if (capitals) emit sendTextSignal("U");
  else          emit sendTextSignal("u");
}
void MyPushButton::changeShift()
{
  capitals = not capitals;
}
