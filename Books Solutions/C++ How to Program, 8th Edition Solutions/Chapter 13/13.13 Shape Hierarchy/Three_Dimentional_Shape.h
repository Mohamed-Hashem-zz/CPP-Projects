#pragma once
#include "Shape.h"
class Three_Dimentional_Shape : public Shape
{
public:
	Three_Dimentional_Shape ( );
	virtual double getArea () = 0;
	virtual double getVolume () = 0;
	virtual void Print () = 0;
	~Three_Dimentional_Shape ();
};

