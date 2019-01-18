/*---------------------------*/
/*------- MyNumber.cpp ------*/
/*---------------------------*/

#include "MyNumber.h"

// constructor
MyNumber::MyNumber (QWidget *parent): QLCDNumber(parent)
{
	op1 = 0;
	op2 = 0;
	res = 0;
	opType = indef;
	absolut = false;
	acumula = 0;
}
void MyNumber::guardarOp1(int i)
{
	op1 = i;
}
void MyNumber::guardarOp2(int i)
{
	op2 = i;
}
void MyNumber::guardarOpSum()
{
	opType = sum;
}
void MyNumber::guardarOpRest()
{
	opType = rest;
}
void MyNumber::guardarOpMult()
{
	opType = mult;
}
void MyNumber::guardarOpDiv()
{
	opType = div;
}
void MyNumber::setRes()
{
	/*----- Calcular resultat -----*/
	switch (opType)
	{
		case sum	: res = op1 + op2; break;
		case rest	: res = op1 - op2; break;
		case mult	: res = op1 * op2; break;
		case div	:
			if (op2 != 0) res = op1 / op2;
			else
			{
				res = 0;
				emit errorSignal("En una divisió, op2 no pot ser 0.");
			}
			break;
		default		:
			res = 0;
			emit errorSignal("No s'ha definit cap tipus d'operació.");
	}

	/*----- Absolut -----*/
	if (absolut) res = abs(res);

	/*----- Enviar resultat -----*/
	emit setResultSignal(res);
}
void MyNumber::setAbsolut()
{
	absolut = !absolut;
	emit errorSignal("Per poder veure el resultat en absolut, clica la tecla '=' .");
}
void MyNumber::acumular()
{
	if (res < 0 or res > 99) errorSignal("op1 només pot estar entre 0 i 99");
	else
	{
		op1 = res;
		emit acumularSignal(op1);
	}
}
void MyNumber::reset()
{
	op1 = 0;
	op2 = 0;
	res = 0;
	opType = indef;
	acumula = 0;
	if (absolut) emit setResetAbsolutSignal();
	emit setResetSignal(0);
}
