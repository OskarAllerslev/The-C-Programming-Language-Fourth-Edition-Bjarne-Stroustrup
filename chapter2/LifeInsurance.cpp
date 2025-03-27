#include "LifeInsurance.h"
#include <cmath>

LifeInsurance::LifeInsurance(int y, double i, double b)
{
	years = y;
	benefit = b;
	interest = i;
};
double LifeInsurance::presentValue() const 
{
	return benefit / std::pow(1+interest, years);
}

