// main.cpp

#include <iostream>
#include "LifeInsurance.h"

int main()
{
	int n;
	double r;
	double B;

	std::cout << "Provide how many years untill death: ";
	std::cin >> n;

	std::cout << "Prodvide the interes rate: ";
	std::cin >> r;

	std::cout << "Provide the benefit upon death to heirs or partner: ";
	std::cin >> B;

	// error handling
	if (n < 0 || r < 0 || B < 0)
	{
		std::cerr << "Error! Inputs must be positive\n";
		return 1;
	}
	LifeInsurance policy(n,r,B);
	std::cout << "The present value is: " << policy.presentValue() << std::endl;
	return 0;
};


