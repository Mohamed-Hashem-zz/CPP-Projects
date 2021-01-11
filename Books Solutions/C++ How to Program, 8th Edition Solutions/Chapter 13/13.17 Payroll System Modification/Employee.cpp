#include "Employee.h"

Employee::Employee ( const string & Fname , const string &Lname , const string & ssn , int day , int month , int year ) : birthday ( day , month , year )
{
	setFirstName ( Fname );
	setLastName ( Lname );
	set_Social_Security_Number ( ssn );
}

void Employee::setFirstName ( const string & Fname ) { firstName = Fname; }
string Employee::getFirstName ( ) const { return firstName; }

void Employee::setLastName ( const string & Lname ) { lastName = Lname; }
string Employee::getLastName ( ) const { return lastName; }

void Employee::set_Social_Security_Number ( const string & ssn ) { social_Security_Number = ssn; }
string Employee::get_Social_Security_Number ( ) const { return social_Security_Number; }

void Employee::setBirthDate ( int m , int d , int y ) { birthday = Date ( m , d , y ); }

Date Employee::getBirthday () const { return birthday; }

void Employee::Print () const
{
	cout << setprecision ( 2 ) << fixed;
	cout << "The Name of The Employee : " << getFirstName () << " " << getLastName () << endl;
	cout << "The Social Security Number : " << get_Social_Security_Number () << endl;
}

Employee::~Employee ()
{
	cout << "The Destructor of the Employee class\n";
}