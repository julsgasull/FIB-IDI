/*---------------------------*/
/*------- MyLabel.cpp -------*/
/*---------------------------*/

#include "MyLabel.h"

// constructor
MyLabel::MyLabel(QWidget *parent):QLabel(parent) 
{
	// Initialize the attributes if needed
}

// implement slots
void MyLabel::setTextUpper (QString s)
{
	QString str = s.toUpper();
	setText (str);
}
