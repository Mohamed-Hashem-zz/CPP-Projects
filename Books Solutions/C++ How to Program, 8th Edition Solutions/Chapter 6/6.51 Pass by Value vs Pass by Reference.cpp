#include <iostream>
using namespace std;

inline int Count_PassByValue (int count)  {   count *= 3 ;   return count; }

inline void  Count_PassByReference (int &count)  { count *= 3; }

int main ( )
{
	int count;
	cout << "Enter Number :";
	cin >> count;

	cout << "Pass By Value of num " << count << " is : " << Count_PassByValue ( count ) << endl;
	cout << "The Number of Call By Value in the main is :" << count << endl;

	cout << "\n----------------------------------------------------\n";

	Count_PassByReference (  count ) ;
	cout << "Pass By Reference of num " << count << " is : " << count << endl;
	cout << "The Number of Call By Reference in the main is :" << count << endl;

	return 0;
}