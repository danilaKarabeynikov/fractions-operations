#pragma once
#include "FractionsOperationsApi.hpp"
#include <cmath>
#include <stdexcept>


class FractionsOperations
{
public:
	FRACTIONSOPERATIONS_API FractionsOperations(int numerator, int denominator);

	FRACTIONSOPERATIONS_API int GCD(int a, int b);

	FRACTIONSOPERATIONS_API int LCM(int a, int b);

	FRACTIONSOPERATIONS_API FractionsOperations operator+(FractionsOperations& rightFraction);

	FRACTIONSOPERATIONS_API FractionsOperations operator-(FractionsOperations& rightFraction);

	FRACTIONSOPERATIONS_API FractionsOperations operator/(FractionsOperations& rightFraction);

	FRACTIONSOPERATIONS_API FractionsOperations operator*(const FractionsOperations& rightFraction);

	FRACTIONSOPERATIONS_API FractionsOperations Reduce(int resNum, int resDen);

	FRACTIONSOPERATIONS_API const int GetNum();

	FRACTIONSOPERATIONS_API const int GetDen();
private:
	int _numerator;
	int _denominator;
};
