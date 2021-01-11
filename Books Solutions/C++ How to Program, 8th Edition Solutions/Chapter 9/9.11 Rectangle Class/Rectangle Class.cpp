#include <iostream>
#include "Rectangle.h"

using namespace std;

int main ( )
{
	Rectangle rect (3.9 , 5.08);
	rect.DisplayRectangle ();

	Rectangle rect1 ;
	rect1.setRect (4.1 , 2.8);
	rect1.DisplayRectangle ();

	Rectangle rect2;
	rect2.setLength (1.3);
	rect2.setWidth (21);
	rect2.DisplayRectangle ();

	cout << endl;
	return 0;
}