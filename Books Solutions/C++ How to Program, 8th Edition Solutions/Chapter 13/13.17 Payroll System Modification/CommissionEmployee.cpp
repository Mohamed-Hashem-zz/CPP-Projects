#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee ( const string & Fname , const string & Lname , const string & SSN , double GS , double CR , int day , int month , int year ) : Employee ( Fname , Lname , SSN , day , month , year )
{

	setGrossSales ( GS );
	setCommissionRate ( CR );
}

void CommissionEmployee::setGrossSales ( double GS )
{
	if ( GS >= 0 )
		grossSales = GS;
	else
		cout << "Gross Salses must be >= 0\n";
}

double CommissionEmployee::getGrossSales ( ) const { return grossSales; }

void CommissionEmployee::setCommissionRate ( double rate )
{
	if ( rate > 0 && rate < 1 )
		commissionRate = rate;
	else
		cout << "commission Rate must be > 0 and < 1 \n";
}

double CommissionEmployee::getCommissionRate ( ) const { return commissionRate; }

double CommissionEmployee::Earnings ( )const
{
	double earn = commissionRate * grossSales;
	return earn;
}

void CommissionEmployee::Print ( ) const
{
	Employee::Print ();
	cout << "The Gross Sales : " << getGrossSales ( ) << endl;
	cout << "The Commission Rate : " << getCommissionRate ( ) << endl;
}

//ostream &operator<<( ostream & output , CommissionEmployee &emp )
//{
//	emp.Print ( );
//	return output;
//}

CommissionEmployee::~CommissionEmployee ( )
{
	cout << "Destructor for Commission Employee Class\n";
}
