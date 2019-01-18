/*---------------------------*/
/*------- MyLineEdit.h ------*/
/*---------------------------*/

#include <QLineEdit>

class MyLineEdit: public QLineEdit
{
	Q_OBJECT
	public:
		MyLineEdit (QWidget *parent=0);

	public
		slots:
			void processReturn ();
		signals:
			void sendText (const QString &);
};
