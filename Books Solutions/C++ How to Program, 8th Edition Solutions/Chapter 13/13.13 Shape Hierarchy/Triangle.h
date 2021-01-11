#pragma once
#include "Two_Dimentional_Shape.h"
class Triangle : public Two_Dimentional_Shape
{
private :
	double length;
	double width;
public:
	Triangle ( double = 0 , double = 0 );
	void setLength ( double );
	double getLength ();
	void setWidth ( double );
	double getWidth ( );

	double getArea ();
	void Print ();

	~Triangle ();
};

