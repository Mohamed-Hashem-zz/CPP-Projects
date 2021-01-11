#include <iostream>
#include <cmath>
#include "Rectangle.h"

using namespace std;

int main ( )
{
	float Point1[2] = { 2.4 , 5.0 } , Point2[2] = { 12.1 , 1.3 } , Point3[2] = { 4.2 , 10.1 } , Point4[2] = { 12.0 , 6.2 };

	Rectangle rect2 ( Point1 , Point2 , Point3 , Point4 );
	rect2.DisplayRectangle ( );

	float P1[2] = { 1.0 , 1.0 } , P2[2] = { 5.0 , 1.0 } , P3[2] = { 1.0 , 6.0 } , P4[2] = { 5.0 , 6.0 };

	Rectangle rect1 ( P1 , P2 ,P3 , P4 ) ;
	rect1.DisplayRectangle ();

	cout << endl;
	return 0;
}