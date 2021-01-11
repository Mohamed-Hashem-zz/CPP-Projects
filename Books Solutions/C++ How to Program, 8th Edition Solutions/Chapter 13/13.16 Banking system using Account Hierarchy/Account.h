#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Account
{
protected :
	double Balance;
public:
	Account ( double = 0 );
	virtual void setBalance ( double );
	virtual double getBalance ( );
	virtual void CreditBalance ( double );
	virtual bool DepitBalance ( double );
	
	~Account ();
};

