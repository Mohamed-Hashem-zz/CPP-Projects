#pragma once
#include "Shape.h"
class Two_Dimentional_Shape : public Shape
{
public:
	Two_Dimentional_Shape ();

	virtual double getArea () = 0;
	virtual void Print () = 0;

	~Two_Dimentional_Shape ();
};

