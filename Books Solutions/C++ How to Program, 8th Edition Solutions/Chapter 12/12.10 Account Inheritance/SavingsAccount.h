#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
	double interestRate;
public:
	SavingsAccount ( double = 0 , double = 0 );
	double Calcualte_Rate ( double );
	~SavingsAccount ();
};

