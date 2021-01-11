#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"

using namespace std;

int main ( )
{
	Package p1 ( "Mohamed Hashem" , "20 El hanfy Street" , "Shohada" , "Menoufia" , 82232 ,
				 "Ahmed Zaki" , "The Palace" , "Shibin El Kom" ,
				 "Menoufia" , 82255 , 20.00 , 2.00 );
	cout << p1;
	cout << "The Total Cost of Package = " << p1.CalculateCost ( ) << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

	OverNightPackage item1 ( "Tom Brown" , "123 Main Street" , "Phoenix" , "Arizona" ,
							 89754 , "John" , "123 bent street" , "Hartford" ,
							 "Connecticut" , 87540 , 12.00 , 1.50 , 1.10 );
	cout << item1 ;
	cout << "The Total Cost of Over Night Package = " << item1.CalculateCost ( ) << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

	TwoDayPackage item2 ( "Monique Smith" , "987 1st Street" , "Sacramento" ,
						  "California" , 87654 , "Paul" , "833 palm Street" , "Miami" ,
						  "Florida" , 98763 , 18.00 , 1.05 , 8.00 );
	cout << item2;
	cout << "The Total Cost of Two Day Package = " << item2.CalculateCost ( ) << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

	return 0;
}