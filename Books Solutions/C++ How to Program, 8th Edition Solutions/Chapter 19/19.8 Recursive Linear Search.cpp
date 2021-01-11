#include <iostream>
#include <algorithm>
#include <vector >

using namespace std;

int recursiveLinearSearch(const vector <int> &v , int searchKey , int i)
{
	if ( v[i] == searchKey )
		return i;	
	
	if ( i == v.size() - 1 && v[i] != searchKey )
		return -1;

	return recursiveLinearSearch(v , searchKey , ++i);
}

int main()
{
	vector <int> intVector;
	int searchKey = 0;

	for ( size_t i = 0; i < 15; i++ )
		intVector.push_back(10 + rand() % 90);

	for ( int num : intVector )
		cout << num << " ";

	cout << "\n";

	cout << "Enter Search Key : ";
	cin >> searchKey;
	
	int Location = recursiveLinearSearch(intVector , searchKey , 0);
	
	cout << endl;
	
	if ( Location != -1 )
		cout << searchKey << " is Founded in index[ " << Location << " ]" ;
	else
		cout << '\a' << searchKey << " is not Found" ;

	cout << endl;
	return 0;
}