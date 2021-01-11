#pragma once
#include "Employee.h"
class CommissionEmployee :public Employee
{
protected:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
	
	//friend ostream &operator<<( ostream & , CommissionEmployee & );

public:
	CommissionEmployee ( const string & , const string & , const string & , double  , double  , int , int , int );

	void setFName ( const string & );
	string getFName ( )const;

	void setLName ( const string & );
	string getLName ( )const;

	void setSSN ( const string & );
	string getSSN ( ) const;

	void setGrossSales ( double );
	double getGrossSales ( ) const;

	void setCommissionRate ( double );
	double getCommissionRate ( )const;

	double Earnings ( )const;

	void Print ( ) const;

	~CommissionEmployee ( );
};