#pragma once
#include "Package.h"
class TwoDayPackage : public Package
{
private :
	double two_day_delivery_fee;
	friend ostream& operator<<( ostream & , TwoDayPackage & );

public:
	TwoDayPackage ( const string & , const string & , const string & , const string & , int  , const string & , const string & , const string & , const string & , int = 0 , double = 0 , double = 0 , double = 0 );
	void setTwo_Day_Delivery_Fee ( double );
	double getTwo_Day_Delivery_Fee ();
	double CalculateCost ( );
	void Print ();
	~TwoDayPackage ();
};

