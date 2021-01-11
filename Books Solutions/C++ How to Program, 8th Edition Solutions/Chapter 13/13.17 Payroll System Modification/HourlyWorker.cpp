#include "HourlyWorker.h"


HourlyWorker::HourlyWorker ( const string & Fname , const string &Lname , const string & SSN , int day , int month , int year , double wage , double hours ) : Employee ( Fname , Lname , SSN , day , month , year )
{
	setWage_Per_Hour ( wage );
	setHours ( hours );
}

void HourlyWorker::setWage_Per_Hour ( double wage ) 
{
	if ( getHours() > 40 )
		Wage_Per_Hour = Wage_Per_Hour + ( Wage_Per_Hour * 1.5 );
	else
		Wage_Per_Hour = wage;
}
double HourlyWorker::getWage_Per_Hour ( )const { return Wage_Per_Hour; }

void HourlyWorker::setHours ( double hours ) { this->Hours = hours; }
double HourlyWorker::getHours ()const { return Hours; }

double HourlyWorker::Earnings ( )const  {  return getHours () * getWage_Per_Hour ();  }

void HourlyWorker::Print ( )const
{
	Employee::Print ();
	cout << "The total Hours Worked = " << getHours () << endl;
	cout << "The Wage Per Huour = " << getWage_Per_Hour () << endl;
}

HourlyWorker::~HourlyWorker ()
{
	cout << "The Destructor of the Hourly Worker class\n";
}
