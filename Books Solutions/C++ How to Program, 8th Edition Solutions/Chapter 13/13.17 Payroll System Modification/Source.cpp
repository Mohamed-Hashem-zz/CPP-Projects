#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include "Date.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"

using namespace std;

int main ( )
{
	SalariedEmployee salaryEmp ( "Mohamed" , "Ahmed" , "111-222-333" , 800 , 1 , 6 , 1999  );
	
	CommissionEmployee CommissionEmp ( "Sameh" , "Said" , "444-555-666" , 10000 , .06 , 11 , 6 , 1965 );
	
	BasePlusCommissionEmployee BasePlusCommissionEmp ( "Ahmed" , "Azab" , "777-888-999" , 5000 , .04 , 300 , 15 , 5 , 1994 );
	
	PieceWorker workerEmp ( "Mohamed" , "Tharwat" , "1010-11-1212" , 26 , 2 , 2005 , 200 , 10 );

	HourlyWorker hourlyEmp ( "Ayman" , "Hashem" , "1313-14-1515" , 8 , 7 , 2020 , 70 , 12 );

	Employee *objects[5] = { &salaryEmp , &CommissionEmp , &BasePlusCommissionEmp , &workerEmp , &hourlyEmp };

	cout << "\n------- Print the objects using Pointer Dynamic binding -------\n\n";

	for ( size_t i = 0; i < 5 ; i++ )
	{
		objects[i]->Print();

		objects[i]->getBirthday ( ).printDate ( );

		if ( objects[i]->getBirthday ().localTime () == objects[i]->getBirthday ().getMonths() )
		{
			cout << "\a\n\tHappy Birthday" << endl;
			cout << "\nEarned for Empolyee = " << objects[i]->Earnings () + 500 ;
		}
		else
			cout << "\nEarned for Empolyee = " << objects[i]->Earnings () ;
		
		cout << "\n-----------------------------------------\n";
	}

	return 0;
}
