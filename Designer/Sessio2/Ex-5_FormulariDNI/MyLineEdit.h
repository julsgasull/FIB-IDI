/*--------------------------*/
/*------ MyLineEdit.h ------*/
/*--------------------------*/
#include <QLineEdit>

class MyLineEdit:public QLineEdit
{
	Q_OBJECT
	public:
		MyLineEdit(QWidget *parent = 0);
		QString str;
		int i;

		public
			slots:
				void initialize();
				void compute(QString);

			signals:
				void showLetter(const QString &);
				void showCount(const QString &);
};
