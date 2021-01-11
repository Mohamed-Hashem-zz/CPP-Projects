#pragma once
#include "Employee.h"
class HourlyWorker : public Employee
{
private :
	double Wage_Per_Hour;
	double Hours;
public:
	HourlyWorker ( const string & , const string & , const string & , int , int , int , double , double );
	
	void setHours ( double );
	double getHours ( )const;

	void setWage_Per_Hour ( double );
	double getWage_Per_Hour ( )const;

	double Earnings ( )const;
	void Print ( )const;

	~HourlyWorker ();
};

