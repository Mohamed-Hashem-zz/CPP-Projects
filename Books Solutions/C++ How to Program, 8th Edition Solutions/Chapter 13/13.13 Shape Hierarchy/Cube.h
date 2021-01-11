#pragma once
#include "Three_Dimentional_Shape.h"
class Cube : public Three_Dimentional_Shape
{
private :
	double SideLength;
public:
	Cube ( double = 0 );
	void setSideLength ( double );
	double getSideLength ( );

	double getArea ( );
	double getVolume ( );

	void Print ( );
	~Cube ();
};

