/*---------------------------*/
/*------- MyLabel.cpp -------*/
/*---------------------------*/

#include "MyLabel.h"

// constructor
MyLabel::MyLabel (QWidget *parent): QLabel (parent)
{
	// Initialize the attributes if needed
	redColorFloor = 217; 	greenColorFloor = 192; 	blueColorFloor = 176;
	redColorBack = 64; 	greenColorBack = 63; 	blueColorBack = 76;
	//redColorBack = 128; greenColorBack = 179;	blueColorBack = 255;
}

/*---- SLOTS ----*/
void MyLabel::getRedFloor(int i)
{
	redColorFloor = i;
	QString style = QString("QLabel {background-color: rgb(" + QString::number(redColorFloor) + "," + QString::number(greenColorFloor) + "," + QString::number(blueColorFloor) + ")}");
	this->setStyleSheet(style);
}
void MyLabel::getGreenFloor(int i)
{
	greenColorFloor = i;
	QString style = QString("QLabel {background-color: rgb(" + QString::number(redColorFloor) + "," + QString::number(greenColorFloor) + "," + QString::number(blueColorFloor) + ")}");
	this->setStyleSheet(style);
}
void MyLabel::getBlueFloor(int i)
{
	blueColorFloor = i;
	QString style = QString("QLabel {background-color: rgb(" + QString::number(redColorFloor) + "," + QString::number(greenColorFloor) + "," + QString::number(blueColorFloor) + ")}");
	this->setStyleSheet(style);
}

void MyLabel::getRedBack(int i)
{
	redColorBack = i;
	QString style = QString("QLabel {background-color: rgb(" + QString::number(redColorBack) + "," + QString::number(greenColorBack) + "," + QString::number(blueColorBack) + ")}");
	this->setStyleSheet(style);
}
void MyLabel::getGreenBack(int i)
{
	greenColorBack = i;
	QString style = QString("QLabel {background-color: rgb(" + QString::number(redColorBack) + "," + QString::number(greenColorBack) + "," + QString::number(blueColorBack) + ")}");
	this->setStyleSheet(style);
}
void MyLabel::getBlueBack(int i)
{
	blueColorBack = i;
	QString style = QString("QLabel {background-color: rgb(" + QString::number(redColorBack) + "," + QString::number(greenColorBack) + "," + QString::number(blueColorBack) + ")}");
	this->setStyleSheet(style);
}
