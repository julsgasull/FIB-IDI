/*---------------------------*/
/*-------- MyLabel.h --------*/
/*---------------------------*/

#include <QLabel>

class MyLabel:public QLabel
{
	Q_OBJECT
	public:
		MyLabel (QWidget *parent=0);
		int redColorFloor,	greenColorFloor,	blueColorFloor;
		int redColorBack,		greenColorBack, 	blueColorBack;
	public
		slots:
			void getRedFloor  (int);
			void getGreenFloor(int);
			void getBlueFloor (int);
			void getRedBack  (int);
			void getGreenBack(int);
			void getBlueBack (int);
};
