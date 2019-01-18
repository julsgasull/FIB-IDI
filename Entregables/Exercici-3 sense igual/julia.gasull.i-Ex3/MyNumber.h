/*---------------------------*/
/*-------- MyNumber.h -------*/
/*---------------------------*/

#include <QLCDNumber>

class MyNumber: public QLCDNumber
{
	Q_OBJECT
	public:
		MyNumber (QWidget *parent);
		int op1, op2;
		int result, resultAbs;
		/* utilitzo dues variables per tal de poder tornar a tenir
		 * un valor negatiu en cas d'haver pulsat per tenir el valor
		 * absolut dos cops
		 */
		bool valorAbsolut;
	public
		slots:
			void getOp1(int);						// per guardar operand 1
			void getOp2(int);						// per guardar operand 2
			void calcSum();							// per calcular suma
			void calcRest();						// per calcular resta
			void calcMult();						// per calcular multiplicació
			void calcDiv();							// per calcular divisió
			void setAbsolut();					// per posar resultat en valor absolut
			void executeAcumula();			// per acumular resultat en op1
			void reset();								// per fer reset (posar tot a 0, ...)
		signals:
			void signalSetResult(int);	// per imprimir resultat
			void signalError(QString);	// per mostrar missatge d'error
			void signalAcumula(int);		// per passar valor acumulat en op1
			void setToZero(int);				// per posar valor a 0 (reset)
			void setToZeroAbsolut();		// per posar botó de valorAbsolut a "no pulsat" (reset)
};
