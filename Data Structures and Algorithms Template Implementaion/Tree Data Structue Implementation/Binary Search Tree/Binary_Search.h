#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stdlib.h>
#include <vector>
using namespace std;

class Binary_Search
{
private:
	vector <int> arr;
	int Size;

public:
	Binary_Search( int );
	int binarySearch( int );
	void DisplayElements();
	void Display_SubarrayElements( int , int );
	~Binary_Search();
};

