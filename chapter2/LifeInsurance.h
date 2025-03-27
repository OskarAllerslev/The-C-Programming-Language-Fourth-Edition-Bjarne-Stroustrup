//lifeInsurance.h

#pragma once

class LifeInsurance
{
	private:
		int years;
		double interest;
		double benefit;	
	public:
		LifeInsurance(int years, double interest, double benefit);
		double presentValue() const;
};
