#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class complexNumbers
{
	private:
	double realNumber;
	double imagineNumber;
	double i ;
	friend istream &operator>>( istream &, complexNumbers & );
	friend ostream &operator<<( ostream &, complexNumbers & );

	public:
	complexNumbers();
	complexNumbers operator* ( complexNumbers & )const ;
	complexNumbers operator+ ( complexNumbers & )const ;
	complexNumbers operator- ( complexNumbers & )const ;
	complexNumbers &operator= ( complexNumbers & ) ;

	bool operator==( complexNumbers & ) const ;
	bool operator!=( complexNumbers & ) const ;
	~complexNumbers();
};

