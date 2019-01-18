/*--------------------------*/
/*------ MyPushButton.h ----*/
/*--------------------------*/
#include <QPushButton>

class MyPushButton:public QPushButton
{
	Q_OBJECT
	public:
		MyPushButton(QWidget *parent = 0);
    bool capitals;

		public
			slots:
        void sendTextA();
				void sendTextE();
				void sendTextI();
				void sendTextO();
				void sendTextU();

				void changeShift();

			signals:
				void sendTextSignal(QString);	
};
