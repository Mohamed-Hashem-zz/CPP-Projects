#include "Triangle.h"


Triangle::Triangle ( double length , double width )
{
	setLength ( length );
	setWidth ( width );
}

void Triangle::setLength ( double length ) { Length = ( length > 0 ) ? length : 0; }
double Triangle::getLength () { return Length; }

void Triangle::setWidth ( double width ) { Width = ( width > 0 ) ? width : 0; }
double Triangle::getWidth () { return Width; }


double Triangle::getArea () { return getLength () * getWidth (); }

void Triangle::Print ()
{
	cout << "The Length of Triangle = " << getLength () << endl;
	cout << "The Width of Triangle = " << getWidth () << endl;
	cout << "The Area of Triangle = " << getArea () << endl;
}

Triangle::~Triangle ()
{
}
