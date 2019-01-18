/*---------------------------*/
/*-------- MyLabel.h --------*/
/*---------------------------*/

#include <QLabel>

class MyLabel:public QLabel
{
	Q_OBJECT
	public:
		MyLabel (QWidget *parent=0);
	public
		slots:
			// ex - hola
			void setTextUpper (QString);
			// ex - truncate
			void MyTruncate (int);
};
