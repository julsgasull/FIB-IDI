/*---------------------------*/
/*------- MyNumber.cpp ------*/
/*---------------------------*/

#include "MyNumber.h"

// constructor
MyNumber::MyNumber (QWidget *parent): QLCDNumber(parent)
{	// valors inicials
	op1 					= 0;
	op2 					= 0;
	result 				= 0;
	valorAbsolut 	= false;
}

void MyNumber::getOp1 (int i)
{
	op1 = i;
}
void MyNumber::getOp2 (int i)
{
	op2 = i;
}

void MyNumber::calcSum()
{
	result = op1 + op2;
	resultAbs = abs(result);

	if (valorAbsolut)	emit signalSetResult(resultAbs);
	else 							emit signalSetResult(result);
}
void MyNumber::calcRest()
{
	result = op1 - op2;
	resultAbs = abs(result);

	if (valorAbsolut)	emit signalSetResult(resultAbs);
	else 							emit signalSetResult(result);
}
void MyNumber::calcMult()
{
	result = op1 * op2;
	resultAbs = abs(result);

	if (valorAbsolut)	emit signalSetResult(resultAbs);
	else 							emit signalSetResult(result);
}
void MyNumber::calcDiv()
{
	if (op2 == 0) emit signalError("En una divisió, el divident ha de ser diferent de 0");
	else
	{
		result = op1 / op2;
		resultAbs = abs(result);

		if (valorAbsolut)	emit signalSetResult(resultAbs);
		else 							emit signalSetResult(result);
	}
}

void MyNumber::setAbsolut()
{
	valorAbsolut = !valorAbsolut;
	if (valorAbsolut)	emit signalSetResult(resultAbs);	// posar a valor absolut
	else 							emit signalSetResult(result);			// tornar a valor sense absolut
}

void MyNumber::executeAcumula()
{
	if (valorAbsolut)
	{
		if (resultAbs > 99)
		{	// en valor absolut no podrà ser < 0
			emit signalError("Valor absolut: op1 no pot ser major de 99");
		} else
		{
			op1 = resultAbs;
			emit signalAcumula(op1);
		}
	} else
	{	// sense valor absolut pot passar els dos casos (< 0, > 99)
		if (result < 0 or result > 99) emit signalError("op1 ha d'estar entre 0 i 99");
		else
		{
			op1 = result;
			emit signalAcumula(op1);
		}
	}
}

void MyNumber::reset()
{
	// poso a 0 widgets amb valor numèric
	emit setToZero(0);
	result = 0; op1 = 0; op2 = 0;

	// canvio valors relacionars amb valor absolut
	if (valorAbsolut) emit setToZeroAbsolut();	//només si estava pulsat
	valorAbsolut = false; resultAbs = 0;

	// resetejo amb valor inicial el missatge d'error
	signalError("Aquí sortiran els missatges d'error si és necessari.");
}
