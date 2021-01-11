#pragma once
#include "Two_Dimentional_Shape.h"

class Circle : public Two_Dimentional_Shape
{
	double Radious;
public:
	Circle ( double = 0 );
	void setRadious ( double );
	double getRadious ()const;
	double getArea ();
	void Print ();
	~Circle ();
};

