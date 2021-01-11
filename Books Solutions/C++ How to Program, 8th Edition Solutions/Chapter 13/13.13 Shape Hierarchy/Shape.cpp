#include "Shape.h"


Shape::Shape ( double length , double width )
{
	setLength ( length );
	setWidth ( width );
}

void Shape::setLength ( double length ) { this->Length = ( length >= 0 ) ? length : 0; }
double Shape::getLength ()const { return Length; }

void Shape::setWidth ( double width ) { this->Width = ( width >= 0 ) ? width : 0; }
double Shape::getWidth ()const { return Width; }

Shape::~Shape ()
{ }
