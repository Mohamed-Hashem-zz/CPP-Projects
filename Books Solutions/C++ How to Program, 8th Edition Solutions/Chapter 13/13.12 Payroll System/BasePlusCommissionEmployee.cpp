#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee ( const string & Fname , const string & Lname , const string & SSN , double GSales , double Crate , double salary , int day , int month , int year ) :CommissionEmployee ( Fname , Lname , SSN , GSales , Crate , day , month , year )
{
	setBaseSalary ( salary );
}

void BasePlusCommissionEmployee::setBaseSalary ( double salary ) { BaseSalary = salary; }

double BasePlusCommissionEmployee::getBaseSalary ( )const { return BaseSalary; }

double BasePlusCommissionEmployee::Earnings ( )const
{
	double earn = BaseSalary + CommissionEmployee::Earnings ( );
	return earn;
}

void BasePlusCommissionEmployee::Print ( )const
{
	CommissionEmployee::Print ( );
	cout << "The Base Salary : " << getBaseSalary ( ) << endl;
}

//ostream &operator<<( ostream & output , BasePlusCommissionEmployee &emp )
//{
//	emp.Print ( );
//	return output;
//}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee ( )
{
	cout << "The Destructor for Base Plus Commission Employee Class\n";
}
