#include "Square.h"


Square::Square ( double length ) 
{
	setSideLength ( length );
}
void Square::setSideLength ( double length ) { SideLength = ( length > 0 ) ? length : 0; }

double Square::getSideLength () { return SideLength; }

double Square::getArea ( ) { return getSideLength ( ) *getSideLength ( ); }

void Square::Print ()
{
	cout << "The Length of the Side of the Square = " << getSideLength ( ) << endl;
	cout << "The Area of the Square = " << getArea () << endl;
}

Square::~Square ()
{
}
