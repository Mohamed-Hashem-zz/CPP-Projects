#pragma once
#include "Two_Dimentional_Shape.h"
class Square : public Two_Dimentional_Shape
{
private :
	double SideLength;
public:
	Square ( double = 0 );
	
	void setSideLength ( double );
	double getSideLength ();

	double getArea ();
	void Print ();
	~Square ();
};

