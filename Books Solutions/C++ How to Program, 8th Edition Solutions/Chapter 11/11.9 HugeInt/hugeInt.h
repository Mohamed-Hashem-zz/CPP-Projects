#pragma once
#include <iostream>
#include <string>
using namespace std;

class hugeInt
{
	friend ostream &operator<< ( ostream & ,const hugeInt & );
	public:
	static const short digits = 30;
	hugeInt(long = 0);
	hugeInt(const string & );
	hugeInt operator+ ( const hugeInt & ) ;
	hugeInt operator+ ( int ) ;
	hugeInt operator+ ( const string & );

	private:
	short numbers[digits];
};

