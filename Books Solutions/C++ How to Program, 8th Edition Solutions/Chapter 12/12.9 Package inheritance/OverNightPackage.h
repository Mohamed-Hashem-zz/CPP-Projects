#pragma once
#include "Package.h"

class OverNightPackage : public Package
{
private :
	double Extra_Day_Delivery_Fee;
	friend ostream& operator<<( ostream & , OverNightPackage & );

public:
	OverNightPackage ( const string & , const string & , const string & , const string & , int  , const string & , const string & , const string & , const string & , int = 0 , double = 0 , double = 0 , double = 0 );
	void setExtra_Day_Delivery_Fee ( double );
	double getExtra_Day_Delivery_Fee ();
	double CalculateCost ( );
	void Print ( );
	~OverNightPackage ();
};

