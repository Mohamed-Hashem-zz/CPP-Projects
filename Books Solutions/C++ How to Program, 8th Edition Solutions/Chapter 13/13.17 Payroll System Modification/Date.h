#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cmath>
#include <exception>
#include <ctime>
#include <string>

using namespace std;

class Date
{
private:
	int Days;
	int Months;
	int Years;
	static const int daysPerMonths[];
	int checkDays ( int );

public:
	Date ( int = 1 , int = 1 , int = 1900 );
	inline void setDate ( int , int , int );
	inline void setMonths ( int );
	inline void setYears ( int );
	inline void setDays ( int );
	inline int getDays ( );
	inline int getMonths ( );
	inline int getYears ( );
	bool endOfMonth ( int );
	int localTime ( );
	void printDate ( );
	void increamentDay ( );
	Date & operator++( );
	Date & operator+=( int );
	~Date ( );
};

