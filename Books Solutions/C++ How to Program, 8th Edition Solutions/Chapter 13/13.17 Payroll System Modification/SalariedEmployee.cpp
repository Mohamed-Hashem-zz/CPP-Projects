#include "SalariedEmployee.h"


SalariedEmployee::SalariedEmployee ( const string & Fname , const string &Lname , const string & ssn , double weeksalary , int day , int month , int year ) :Employee ( Fname , Lname , ssn , day , month , year )
{
	setWeeklySalary ( weeksalary );
}

void SalariedEmployee::setWeeklySalary ( double weeksalary )
{
	if ( weeksalary >= 0 )
		WeeklySalary = weeksalary;
	else
		cout << "\aWeekly Salary must be >= 0" << endl;
}

double SalariedEmployee::getWeeklySalary () const { return WeeklySalary; }

void SalariedEmployee::Print ()const
{
	Employee::Print ();
	cout << "The Weekly Salary is : " << getWeeklySalary () << endl;
}

double SalariedEmployee::Earnings ()const
{
	return getWeeklySalary ();
}

SalariedEmployee::~SalariedEmployee ()
{
	cout << "The Destructor of the Salaryed Employee class\n";
}
