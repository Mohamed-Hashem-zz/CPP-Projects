// How To program 8th Edition 
// Number page of problem : 179, question number : 4.17
// find the Largest 

#include <iostream>
using namespace std;
int main()

{

	int num =0 ,counter =1, Largest =0;

	Largest = num;
	
	while (counter <= 10)
	{
		cin >> num;

		if (num >= Largest )
			Largest = num;

		counter++;
	}

	cout<<" The Largest Number : "<<Largest <<endl;

	return 0;
}