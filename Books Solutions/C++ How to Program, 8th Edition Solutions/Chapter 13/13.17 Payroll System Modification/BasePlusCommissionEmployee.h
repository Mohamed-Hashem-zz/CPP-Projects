#pragma once
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
	double BaseSalary;
	
	//friend ostream &operator<<( ostream & , BasePlusCommissionEmployee & );

public:
	BasePlusCommissionEmployee ( const string & , const string & , const string & , double , double , double , int , int , int );
	void setBaseSalary ( double );
	double getBaseSalary ( )const;
	double Earnings ( )const;
	void Print ( ) const;

	~BasePlusCommissionEmployee ( );
};

