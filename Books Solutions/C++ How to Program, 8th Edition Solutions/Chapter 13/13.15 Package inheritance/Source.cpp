#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"

using namespace std;

int main ( )
{
	OverNightPackage item1 ( "Tom Brown" , "123 Main Street" , "Phoenix" , "Arizona" ,
							 89754 , "John" , "123 bent street" , "Hartford" ,
							 "Connecticut" , 87540 , 12.00 , 1.50 , 1.10 );

	TwoDayPackage item2 ( "Monique Smith" , "987 1st Street" , "Sacramento" ,
						  "California" , 87654 , "Paul" , "833 palm Street" , "Miami" ,
						  "Florida" , 98763 , 18.00 , 1.05 , 8.00 );

	int totalCost = 0;

	Package *packages[2] = { &item1 , &item2 };

	for ( size_t i = 0; i < 2; i++ )
	{
		cout << "From : " << packages[i]->getSenderName () << endl;
		cout << "to : " << packages[i]->getRecipientName () << endl<<endl;

		cout << "The Adderess of Sender: " << packages[i]->getSenderAddress ( ) << endl;
		cout << "The Adderess of Recipient : " << packages[i]->getRecipientAddress () << endl << endl;

		cout << "The Calculate Cost = " << packages[i]->CalculateCost () << endl;

		totalCost += packages[i]->CalculateCost ();

		cout << "---------------------------------------------\n";
	}

	cout << "The Total Cost = " << totalCost << endl;
    	return 0;
}