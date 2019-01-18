/*---------------------------*/
/*------- MyLabel.cpp -------*/
/*---------------------------*/

#include "MyLabel.h"

// constructor
MyLabel::MyLabel (QWidget *parent): QLabel (parent)
{
	// Initialize the attributes if needed
}

/*---- SLOTS ----*/

// ex - hola
void MyLabel::setTextUpper (QString s)
{
	QString str = s.toUpper();
	setText (str);
}
// ex - truncate
void MyLabel::MyTruncate (int n)
{
	QString str = text();
	str.truncate(n);
	setText (str);
}
