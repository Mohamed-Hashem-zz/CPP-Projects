#include "Rectangle.h"

Rectangle::Rectangle (float len , float wid) { setRect (len , wid); }

void Rectangle::setRect (float len , float wid)
{
	setLength (len);
	setWidth (wid);
}

void Rectangle::setLength (float len)
{
	if (len > 0 && len < 20)
		Length = len;
	else
		cout << "\aThe Length has been Excceded the Valid Value" << endl , exit (0);
}

void Rectangle::setWidth (float wid)
{
	if (wid > 0 && wid < 20)
		Width = wid;
	else
		cout << "\aThe Width has been Excceded the Valid Value" << endl , exit (0);
}

float Rectangle::getWidth () { return Width; }

float Rectangle::getLength () { return Length; }

float Rectangle::getArea ()
{
	float Area = 0;
	Area = Length * Width;
	return Area;
}

float Rectangle::getPerimeter ()
{
	float Perimeter = 0;
	Perimeter = (Length + Width) * 2;
	return Perimeter;
}

void Rectangle::DisplayRectangle ()
{
	cout << "The Length is : " << ( ( getLength ( ) > getWidth ( ) ) ? getLength ( ) : getWidth ( ) );
	cout << ", The Width is : " << ( ( getLength ( ) > getWidth ( ) ) ? getWidth ( ) : getLength ( ) ) << endl;
	cout << "The Area of the Rectangle is : " << getArea () << endl;
	cout << "The Perimeter of the Rectangle is : " << getPerimeter () << endl;

	cout << "\n-----------------------------------------------------\n";
}
Rectangle::~Rectangle ( )
{
}
