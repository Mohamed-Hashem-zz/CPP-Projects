#pragma once
#include "Three_Dimentional_Shape.h"
class Sphere : public Three_Dimentional_Shape
{
private:
	double Radious;
public:
	Sphere ( double );
	void setRadious ( double );
	double getRadious ()const;
	double getVolume ();
	double getArea ();
	void Print ();
	~Sphere ();
};

