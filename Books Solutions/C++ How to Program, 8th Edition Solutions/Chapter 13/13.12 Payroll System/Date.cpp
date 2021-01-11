#include "Date.h"

const int Date::daysPerMonths[13] = { 0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };

Date::Date ( int d , int m , int y )
{
	setDate ( d , m , y );
}

inline void Date::setDate ( int d , int m , int y )
{
	setMonths ( m );
	setYears ( y );
	setDays ( d );
}

inline void Date::setMonths ( int m )
{
	if ( m >= 1 && m <= 12 )
		Months = m;
	else
		cout << "\aunValid Month Value,Please Try again correctly" << endl , exit ( 0 );
}

inline void Date::setYears ( int y )
{
	if ( y >= 1900 )
		Years = y;
	else
		cout << "unValid Year Value,Please Try again correctly" << endl , exit ( 0 );
}

inline void Date::setDays ( int d )
{
	if ( getMonths ( ) == 2 && d == 29 || d >= 1 && d <= daysPerMonths[getMonths ( )] )
		Days = d;
	else
		cout << "unValid day Value,Please Try again correctly" << endl , exit ( 0 );
}

inline int Date::getDays ( ) { return Days; }

inline int Date::getMonths ( ) { return Months; }

inline int Date::getYears ( ) { return Years; }

void Date::printDate ( )
{
	static const string monthsNames[13] = { "" , "January" , "February" , "March" , "April" , "May" , "June" , "July" ,
		"August" , "September" , "Ocotber" , "November" , "December" };

	cout << "\nThe Date is : " << setfill ( '0' ) << setw ( 2 ) << getDays ( ) << " / " <<
		setfill ( '0' ) << setw ( 2 ) << getMonths ( ) << " / " << getYears ( ) << endl;

	cout << "\t" << monthsNames[getMonths ( )] << ' ' << getDays ( ) << ',' << getYears ( ) << endl;
}

int Date::localTime ( )
{
	time_t now = time ( 0 );

	tm *timeLocal = localtime ( &now );

	int month = 1 + timeLocal->tm_mon;

	return month;
}

bool Date::endOfMonth ( int day )
{
	if ( getMonths ( ) == 2 && ( getYears ( ) % 400 == 0 || ( getYears ( ) % 4 == 0 && getYears ( ) % 100 != 0 ) ) )
		return day == 29;
	else
		return day == daysPerMonths[getMonths ( )];
}

void Date::increamentDay ( )
{
	if ( !endOfMonth ( getDays ( ) ) )
		setDays ( getDays ( ) + 1 );
	else
	{
		setDays ( 1 );

		if ( getMonths ( ) < 12 )
			setMonths ( getMonths ( ) + 1 );
		else
		{
			setMonths ( 1 );
			setYears ( getYears ( ) + 1 );
		}
	}
}

Date &Date::operator++ ( )
{
	increamentDay ( );
	return *this;
}

Date &Date::operator+= ( int n )
{
	for ( size_t i = 0; i < n; i++ )
		increamentDay ( );

	return *this;
}

Date::~Date ( ) {}
