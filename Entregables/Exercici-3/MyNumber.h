/*---------------------------*/
/*-------- MyNumber.h -------*/
/*---------------------------*/

#include <QLCDNumber>

class MyNumber: public QLCDNumber
{
	Q_OBJECT
	public:
		MyNumber (QWidget *parent);
		int op1;
		int op2;
		int res;
		enum operation {sum, rest, mult, div, indef}; operation opType;
		bool absolut;
		int acumula;
	public
		slots:
			void guardarOp1(int);
			void guardarOp2(int);
			void guardarOpSum();
			void guardarOpRest();
			void guardarOpMult();
			void guardarOpDiv();
			void setRes();
			void setAbsolut();
			void acumular();
			void reset();
		signals:
			void setResultSignal(int);
			void setResetSignal(int);
			void setResetAbsolutSignal();
			void acumularSignal(int);
			void errorSignal(QString);
};
