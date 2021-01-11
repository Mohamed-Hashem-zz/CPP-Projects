#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "Circle.h"
#include "Shape.h"
#include "Square.h"
#include "Three_Dimentional_Shape.h"
#include "Triangle.h"
#include "Two_Dimentional_Shape.h"
#include "Cube.h"
#include "Sphere.h"

using namespace std;

int main ( )
{
	cout << fixed << setprecision ( 2 );

	Circle *circle = new Circle ( 5.0 );
	Triangle *triangle = new Triangle ( 3.0 , 4.0 );
	Square *square = new Square ( 6.0 );
	Cube *cube = new Cube ( 5.00 );
	Sphere *sphere = new Sphere ( 8.0 );

	Shape *shapes[5] = { circle , triangle , square , cube , sphere };

	
	for ( size_t i = 0; i < 5; i++ )
	{
		shapes[i]->Print ();

		Two_Dimentional_Shape *twoDm_Shapes = dynamic_cast <Two_Dimentional_Shape*> ( shapes[i] );
		
		if ( twoDm_Shapes != 0 )
			cout << "\nThe Area of This Shape  = " << twoDm_Shapes->getArea ();
		else
		{
			Three_Dimentional_Shape *threeDm_Shapes = dynamic_cast <Three_Dimentional_Shape *> ( shapes[i] );
			
			if ( threeDm_Shapes != 0 )
			{
				cout << "\nThe total Area of This Shape = " << threeDm_Shapes->getArea() << endl;
				cout << "The The Volume of This Shape = " << threeDm_Shapes->getVolume () ;
			}
		}
		  
		cout << "\n--------------------------------------------\n";
	}

	for ( size_t i = 0; i < 5; i++ )
		delete shapes[i];

	return 0;
}