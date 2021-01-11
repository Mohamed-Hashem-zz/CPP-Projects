#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
private:
	double Fee_Per_Transaction;
public:
	CheckingAccount ( double = 0 , double = 0 );
	void CreditBalance ( double );
	bool DepitBalance ( double );
	void changeFee ();
	
	~CheckingAccount ();
};

