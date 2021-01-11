// How To program 8th Edition 
// Number page of problem : 177 , question number : 4.13
// Gas Mileage

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double miles=0, gallons=0, MPG_This_Trip=0,total_MPG=0 , total_Miles=0,total_Gallons=0;

cout<<fixed <<setprecision (6);

cout<<"Enter Miles driver (-1 to quit ): ";
cin>>miles;

	while (true)
	{ 
		if(miles != -1)
		{

		cout<<"Enter gallons used : ";

		cin>>gallons;

		MPG_This_Trip = miles / gallons ; 

		cout<<"MPG this Trip : " << MPG_This_Trip <<endl;

		total_Miles += miles ;

		total_Gallons += gallons ;

		total_MPG = total_Miles / total_Gallons ; 

		cout<<"Total MPG : "<<total_MPG <<endl << endl;

		}
		else 
			break;

		cout<<"Enter Miles driver (-1 to quit ): ";
		cin>>miles;

	}

return 0;
}
