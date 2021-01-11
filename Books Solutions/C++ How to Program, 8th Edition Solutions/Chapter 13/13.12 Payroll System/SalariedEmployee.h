#pragma once
#include "Employee.h"
class SalariedEmployee : public Employee
{
	double WeeklySalary;
public:
	SalariedEmployee ( const string & , const string & , const string & , double , int , int , int );
	void setWeeklySalary ( double );
	double getWeeklySalary ()const;
	double Earnings ( )const;
	void Print ()const;

	~SalariedEmployee ();
};

