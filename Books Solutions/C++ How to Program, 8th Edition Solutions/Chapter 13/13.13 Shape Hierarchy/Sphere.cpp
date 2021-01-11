#include "Sphere.h"

Sphere::Sphere (double radious)
{
	setRadious ( radious );
}
void Sphere::setRadious ( double radious ) { Radious = ( radious >= 0 ) ? radious : 0; }
double Sphere::getRadious ( )const { return Radious; }

double Sphere::getVolume () { return 0.75 * pi * getRadious () * getRadious () * getRadious (); }
double Sphere::getArea () { return 4 * pi * Radious * Radious; }

void Sphere::Print ()
{
	cout << "The Radious of the Sphere = " << getRadious () << endl;
	cout << "The Area of the Sphere = " << getArea () << endl;
	cout << "The Volume of the Sphere = " << getVolume () << endl;
}

Sphere::~Sphere ()
{
}
