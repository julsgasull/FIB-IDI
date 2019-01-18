/*--------------------------*/
/*------ MyPushButton.h ----*/
/*--------------------------*/
#include <QPushButton>

class MyPushButton:public QPushButton
{
	Q_OBJECT
	public:
		MyPushButton(QWidget *parent = 0);
    int random;

		public
			slots:
        void setRandom();
        void changeColor(int);

};
