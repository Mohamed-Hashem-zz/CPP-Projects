#include <stdc++.h>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <numeric>
using namespace std;

const int rows = 3 ;
const int column = 3 ; 

int main()
{ 
	srand(time(0));

	
	int arr2D[rows][column]= {};

	int arr1D [rows * column]= {};

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> arr2D[i][j];
		}

	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout<<arr2D[i][j] << " ";
		}
		cout << endl;
																			  
	}

		cout<<endl;
 

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr1D[ rows*i+j ] =  arr2D[i][j] ;
			
		}

	}


	for (int i = 0; i < rows * column; i++)
	{
			  cout<<arr1D[i] <<" " ;
	}

	cout<<endl;



  return 0;
}
