#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

const int length = 15 ; 

void BubbleSort(vector <int> &v)
{	
	for ( size_t i = 0; i < v.size() - 1; i++ )
	{
		for ( size_t j = 0; j < v.size() - i - 1; j++ )
		{
			if ( v[j] > v[j + 1] )
				swap(v[j] , v[j + 1]);
		}
	}
}

void Print(vector <int> v)
{
	for ( int number : v )
		cout << number << ' ';
}

int main()
{
	srand(time(0));

	vector <int> v;

	for ( size_t i = 0; i < length; i++ )
		v.push_back(10 + rand() % 90) ;

	cout << "Before Sorting : ";
	Print(v);

	cout << "\n\n";

	BubbleSort(v);

	cout << "After Sorting : ";
	Print(v);
	
	cout << endl;
	return 0;
}