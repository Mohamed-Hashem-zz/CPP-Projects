// How To program 8th Edition 
// Number page of problem :293  , question number : 6.36
// Expontentiation  Using recursion

#include <iostream>

using namespace std;

int power (int base , int exp)	;

int main()

{
	int base , exp ;
	cin >> base >> exp;
	cout << power( base , exp ) << endl;



	return 0;
}

int power (int base , int exp)	

{
	static int pow=1;

		if (exp==0)
			return pow;
		else 
			pow *= base;

		return	power( base , exp-1);

}