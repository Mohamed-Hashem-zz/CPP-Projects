#include <iostream>
using namespace std;

int main( )
{
	int num = 0 , DecimalNumber = 0 , i = 0 , temp = 0;
	cin >> num;
	temp = num;

	while ( num != 0 )
	{
		DecimalNumber += num % 10 * pow( 2 , i );
		i++;
		num /= 10;
	}
	  cout << "The decimal equivalent of " << temp << " is " << DecimalNumber << endl;

	return 0;
}