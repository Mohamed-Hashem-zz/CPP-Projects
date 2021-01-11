#include <iostream>
using namespace std;

int main( )
{
	float BMI = 0 , weigthInKilograms = 0 , heightInMeters = 0;

	cout << "Enter weigth in Kilograms : ";
	cin >> weigthInKilograms ;

	cout << "Enter height in meters : ";
	cin >> heightInMeters;
	
	BMI = weigthInKilograms / ( heightInMeters * heightInMeters );

	cout << "BMI Calculator is : " << BMI << endl;

	cout << "BMI VALUES : ";

	if ( BMI < 18.5 )
		cout << "UnderWeight";
	else if ( BMI >= 18.5 && BMI <= 24.9 )
		cout << "Normal";
	else if ( BMI >= 25 && BMI <= 29.9 )
		cout << "OverWeight";
	else
		cout << "Obese";

	cout << endl;
	return 0;
}