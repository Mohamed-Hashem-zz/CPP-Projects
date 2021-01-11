#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector >

using namespace std;

int RecursiveBinarySearch(vector<int> v , int searchKey , int high , int low)
{
	int  middle = ( high + low + 1 ) / 2;

	if ( low > high )
	     return -1;
	
	if ( searchKey == v[middle] )
		return  middle;
	else if ( searchKey > v[middle] )
		return RecursiveBinarySearch(v , searchKey , high , middle + 1);
	else
		return RecursiveBinarySearch(v , searchKey , middle - 1 , low);	
}

int main()
{
	vector <int> v;
	
	srand(time(0));

	for ( size_t i = 0; i < 15 ; i++ )
		v.push_back(10 + rand() % 90);

	sort(v.begin() , v.end());

	for ( int i : v )
		cout << i << ' ';

	cout << endl;

	int searchKey;
	cout << "Enter Search Key :";
	cin >> searchKey;

	cout << '\n';
	
	int index = RecursiveBinarySearch(v , searchKey , v.size() - 1 , 0);

	if ( index != -1 )
		cout << "The searchKey ( " << searchKey << " ) is Founded in index [ " << index << " ]";
	else
		cout << "\aThe searchKey ( " << searchKey << " ) is not Founded ";

	cout << "\n-----------------------------------------------\n";

	return 0;
}