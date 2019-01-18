/*--------------------------*/
/*----- MyLineEdit.cpp -----*/
/*--------------------------*/

#include "MyLineEdit.h"

MyLineEdit::MyLineEdit(QWidget *parent):QLineEdit(parent)
{
	str = QString::fromStdString("**********");
	i = 5;
}

void MyLineEdit::initialize()
{
	clear();
	this->setStyleSheet("background-color: white; color: black");

	str = "**********";
	emit showLetter(str);

	i = 5;
	QString count = QString::number(i);     // convert int to QString
	emit showCount(count);
}

void MyLineEdit::compute(QString s)
{
	if 			(s[s.size()-1] == 'D') str[0] = 'D';
	else if (s[s.size()-1] == 'I') str[1] = str[4] = str[9] = 'I';
	else if (s[s.size()-1] == 'C') str[2] = str[3] = 'C';
	else if (s[s.size()-1] == 'O') str[5] = 'O';
	else if (s[s.size()-1] == 'N') str[6] = 'N';
	else if (s[s.size()-1] == 'A') str[7] = 'A';
	else if (s[s.size()-1] == 'R') str[8] = 'R';
	else --i;   // error --> less oportunities available

	if (i >= 0 and i <= 5)
	{
		QString count = QString::number(i);     // convert int to QString
		emit showCount(count);
	}
	if (i == 0)
	{
		clear();
		this->setStyleSheet("background-color: red");
	}
	if (str == "DICCIONARI")
	{
		clear();
		this->setStyleSheet("background-color: green");
	}
	emit showLetter(str);
}
