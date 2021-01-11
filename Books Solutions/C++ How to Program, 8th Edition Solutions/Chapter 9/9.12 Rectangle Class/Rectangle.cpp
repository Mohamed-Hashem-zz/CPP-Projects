#include "Rectangle.h"

Rectangle::Rectangle ( float Point1[2] , float Point2[2] , float Point3[2] , float Point4[2] )
{ setCoord ( Point1 , Point2 , Point3 , Point4 ); }

void Rectangle::setCoord ( float Point1[2] , float Point2[2] , float Point3[2] , float Point4[2] )
{
	setLength ( Point1 , Point2 );
	setWidth ( Point3 , Point4 );
}

void Rectangle::setLength (float L1[2] , float L2[2])
{
	if (L1[0] > 0 && L1[1] < 20 && L2[0] > 0 && L2[1] < 20)
		Length = sqrt ( pow ( L1[1] - L2[1] , 2 ) + pow ( L1[0] - L2[0] , 2 ) );
	else
		cout << "\aThe Length has been Excceded the Valid Value" << endl , exit (0);
}

void Rectangle::setWidth ( float W1[2] , float W2[2] )
{
	if ( W1[0] > 0 && W1[1] < 20 && W2[0] > 0 && W2[1] < 20 )
		Width = sqrt ( pow ( W1[1] - W2[1] , 2 ) + pow ( W1[0] - W2[0] , 2 ) );
	else
		cout << "\aThe Width has been Excceded the Valid Value" << endl , exit (0);
}

float Rectangle::getWidth () { return Width; }

float Rectangle::getLength () { return Length; }

float Rectangle::getArea ()
{
	float Area = 0;
	Area = getLength () * getWidth ();
	return Area;
}

float Rectangle::getPerimeter ()
{
	float Perimeter = 0;
	Perimeter = ( getLength () + getWidth () ) * 2;
	return Perimeter;
}

bool Rectangle::SquareFunction ()
{
	if ( getLength () == getWidth () )
		return false;
	else
		return true;
}

void Rectangle::DisplayRectangle ()
{
	if ( SquareFunction () )
	{
		cout << "The Length is : " << ( ( getLength () > getWidth () ) ? getLength () : getWidth () );
		cout << ", The Width is : " << ( ( getLength () > getWidth () ) ? getWidth () : getLength () ) << endl;
		cout << "The Area of the Rectangle is : " << getArea () << endl;
		cout << "The Perimeter of the Rectangle is : " << getPerimeter () << endl;
	}
	else
		cout << "The Sides represent Square" ;

	cout << "\n------------------------------------------\n";
}
Rectangle::~Rectangle ( )
{
	cout << "Destructor End :D" << endl;
}
