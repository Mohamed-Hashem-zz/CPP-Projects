#include "Cube.h"


Cube::Cube (double side)
{
	setSideLength ( side );
}

void Cube::setSideLength ( double length ) { SideLength = ( length > 0 ) ? length : 0; }
double Cube::getSideLength () { return SideLength; }

double Cube::getArea () { return 6 * getSideLength () * getSideLength (); }
double Cube::getVolume () { return   getSideLength () * getSideLength () * getSideLength (); }

void Cube::Print ()
{
	cout << "The Length of the Side of the Cube = " << getSideLength () << endl;
	cout << "The Area of the Cube = " << getArea () << endl;
	cout << "The Volume of the Cube = " << getVolume () << endl;

}


Cube::~Cube ()
{
}
