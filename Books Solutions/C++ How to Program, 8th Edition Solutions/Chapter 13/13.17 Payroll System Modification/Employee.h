#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"
using namespace std;

class Employee
{
private :
	string firstName;
	string lastName;
	string social_Security_Number;
	Date birthday;
public:
	Employee ( const string & , const string & , const string & , int , int ,  int );
	void setFirstName ( const string & );
	string getFirstName ( ) const;
	
	void setBirthDate ( int , int , int );
	Date getBirthday () const;

	void setLastName ( const string & );
	string getLastName ( )const;
	
	void set_Social_Security_Number ( const string & );
	string get_Social_Security_Number ()const;

	virtual void Print () const = 0 ;
	virtual double Earnings () const = 0;
	~Employee ();
};