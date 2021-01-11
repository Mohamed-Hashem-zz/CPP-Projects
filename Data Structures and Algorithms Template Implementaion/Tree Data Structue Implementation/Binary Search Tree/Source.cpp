#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Binary_Search.h"
using namespace std;

int main( )
{
	int searchKey , nums = 0;
	
	cout << "Enter Element Number : "; cin >> nums;

	Binary_Search element1( nums );

	cout << "Enter Element : ";
	cin >> searchKey;

	int Postion = element1.binarySearch( searchKey );

	if( Postion != -1 )
		cout << "The Element ( " << searchKey << " ) is found in Postion arr[ " << Postion << " ]" << endl;
	else
		cout << "\aThe Element ( " << searchKey << " ) is not found " << endl;

	return 0;
}