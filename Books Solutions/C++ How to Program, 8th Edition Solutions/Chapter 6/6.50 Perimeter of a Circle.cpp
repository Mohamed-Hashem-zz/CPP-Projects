#include <iostream>

using namespace std;

const float pi = 3.14;

inline float PreimeterCircle ( float r ) { return ( 2 * pi * r ) ; }

int main ( )
{

	float radious = 0 , preimeter = 0;
	cout << "Enter The Radious: ";
	cin >> radious;

	preimeter = PreimeterCircle ( radious );

	cout << "The Preimeter of a Circle is :" << preimeter << endl;

	return 0;
}