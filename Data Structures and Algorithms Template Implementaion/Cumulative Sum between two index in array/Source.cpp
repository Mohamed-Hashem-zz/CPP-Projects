// Cumulative Sum between two index in array  

#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int   length = 5;

void preCompute(int arr[], int n, int pre[]) 
{ 
    for (int i = 0; i < n; i++)
	{
		if (i == 0 )
			pre[i] = arr[i];
		
		else
		    pre[i] = arr[i] + pre[i - 1]; 
	}
} 

int rangeSum (int pre[],int start,int end)
{

	if (start == 0)
		return pre[end];

	return pre[end] - pre[ start - 1];

}

int main()
{ 
  
	int  arr[length] ={};

	for (int i = 0; i < length; i++)
			cin>>arr[i];
	
		
    const int n = sizeof(arr) / sizeof(arr[0]); 

	int pre [n] = {};

	preCompute(arr, n, pre); 

	for (int i = 0; i < n; i++)
	{
		cout<<pre[i]<<" ";

	}

	  cout<<endl;

	cout << rangeSum(pre , 1 , 3 ) << endl; 

    cout << rangeSum(pre , 2 , 4 ) << endl; 

	cout<<endl;

  return 0;
}