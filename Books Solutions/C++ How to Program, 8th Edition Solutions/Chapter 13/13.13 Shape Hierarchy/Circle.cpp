#include "Circle.h"


Circle::Circle ( double radious ) { setRadious ( radious ); }

void Circle::setRadious ( double radious ) { Radious = ( radious >= 0 ) ? radious : 0; }

double Circle::getRadious ()const { return Radious; }

double Circle::getArea () { return pi * getRadious () * getRadious (); }

void Circle::Print ()
{
	cout << "The Radious of the Circle = " << getRadious () << endl;
	cout << "The Area of the Circle = " << getArea () << endl;
}

Circle::~Circle ()
{
}
