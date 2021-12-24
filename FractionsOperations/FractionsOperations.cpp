#include "stdafx.h"
#include "FractionsOperations.hpp"

FractionsOperations::FractionsOperations(int numerator, int denominator)
	:_numerator(numerator), _denominator(denominator)
{
	if (denominator == 0)
		throw "Invalid argument";
}


const int FractionsOperations::GetDen()
{
	return _denominator;
}


const int FractionsOperations::GetNum()
{
	return _numerator;
}


int FractionsOperations::GCD(int a, int b)
{
	a = abs(a);
	b = abs(b);

	while (a&&b)

		if (a >= b)
			a %= b;

		else

			b %= a;

	return a | b;
}


int FractionsOperations::LCM(int a, int b)
{
	return a * b / GCD(a, b);
}


FractionsOperations FractionsOperations::Reduce(int resNum, int resDen)
{
	return FractionsOperations(resNum / GCD(resNum, resDen), resDen / GCD(resNum, resDen));
}



FractionsOperations FractionsOperations::operator+(FractionsOperations& right)
{
	int FirstDen = _denominator;
	int SecondDen = right._denominator;
	int FirstNum = _numerator;
	int SecondNum = right._numerator;


	if (FirstDen == SecondDen)
	{
		int Num = FirstNum + SecondNum;
		return Reduce(Num, LCM(FirstDen, SecondDen));
	}

	else if (FirstDen && SecondDen != 0)
	{
		int resNum = FirstNum * (LCM(FirstDen, SecondDen) / FirstDen) + SecondNum * (LCM(FirstDen, SecondDen) / SecondDen);

		return Reduce(resNum, LCM(FirstDen, SecondDen));
	}

}


FractionsOperations FractionsOperations::operator-(FractionsOperations& right)
{
	throw "Not implemented yet.";
}


FractionsOperations FractionsOperations::operator/(FractionsOperations& right)
{
	throw "Not implemented yet.";
}


FractionsOperations FractionsOperations::operator*(const FractionsOperations& right)
{
	return  Reduce
	(_numerator * right._numerator,
		_denominator * right._denominator);
}
