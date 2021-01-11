#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <ctime>
#include <numeric>

using namespace std;

const int  rows1 = 3;
const int  columns1 = 4;
const int  rows2 = 4;
const int  columns2 = 2;


void Multiply ( int arr1[rows1][columns1] , int arr2[rows2][columns2] , int arr3[rows1][columns2] )
{
	srand ( time(0) );

	assert( " columns1 Should Equal rows2 " && columns1 == rows2 );

	for (int row = 0; row < rows1; row++)
	{
		for (int column = 0; column < columns1; column++)
		{
				arr1[row][column]= rand() %10;
		}

	}

	for (int row = 0; row < rows2; row++)
	{
		for (int column = 0; column < columns2; column++)
		{
				arr2[row][column]= rand() %10;
		}

	}

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < columns1; j++)
		{
				   cout<<arr1[i][j]<<" ";
		}

		cout<<endl;
	}

			cout<<endl;

	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < columns2; j++)
		{
				   cout<<arr2[i][j]<<" ";
		}

		cout<<endl;
	}

		cout<<endl;
		   
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j< columns2; j++)
		{
			for (int k = 0; k < columns1; k++)
			{
					 arr3[i][j] += arr1[i][j] * arr2[i][j];
			}
		}

	}

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < columns2; j++)
		{
				   cout<<arr3[i][j]<<" ";
		}

		cout<<endl;
	}

}
int main()
{ 
	int arr1[rows1][columns1] = {};
	int arr2[rows2][columns2] = {};
	int arr3[rows1][columns2] = {};

	Multiply(arr1,arr2,arr3);

	cout<<endl;

  return 0;
}