#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include "Date.h"

using namespace std;

int main ( )
{
	SalariedEmployee salaryEmp ( "Mohamed" , "Hashem" , "01019209273" , 800 , 12 , 12 , 1999  );
	
	CommissionEmployee CommissionEmp ( "Ahmed" , "Zaki" , "01004051617" , 10000 , .06 , 7 , 6 , 2020 );
	
	BasePlusCommissionEmployee BasePlusCommissionEmp ( "Ayman" , "Ahmed" , "01097102004" , 5000 , .04 , 300 , 8 , 7 , 2020 );
	
	Employee *objects[3] = { &salaryEmp , &CommissionEmp , &BasePlusCommissionEmp };

	cout << "\n------- Print the objects using Pointer Dynamic binding -------\n\n";

	for ( size_t i = 0; i < 3; i++ )
	{
		objects[i]->Print();

		objects[i]->getBirthday ( ).printDate ( );

		if ( objects[i]->getBirthday ().localTime () == objects[i]->getBirthday ().getMonths() )
		{
			cout << "\a\nHappy Birthday" << endl;
			cout << "\nEarned for Empolyee = " << objects[i]->Earnings () + 500 << endl;
		}
		else
			cout << "\nEarned for Empolyee = " << objects[i]->Earnings () << endl;
		
		cout << "\n-----------------------------------------\n";
	}

	return 0;
}
