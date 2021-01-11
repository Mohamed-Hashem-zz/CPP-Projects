#include <iostream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <iomanip>	
#include <bitset>	
#include <string>	
#include <cctype> 	
#include <cmath> 	
#include <cstdlib>	
#include <ctime>
#include <cstdio>
#include <vector>

using namespace std;

const int  length = 10;

int main()
{ 
	srand (time(false));

  ios_base :: sync_with_stdio(false);
	cin.tie(NULL);

	int arr[length] =  {} , mat [length]={} , j =  0 ,n = 0 ;

	for (int i = 0; i < length; i++)
	{  
		arr[i] = rand() % 100;
		cout << arr[i] <<" ";
	}
	  
	 cout << endl;

	  cin >> n ; 
	
	  for (int i = 0; i < length; i++)
		  { 
				mat[i] = arr[i];
				arr[i] = arr[i + n] ;
		  }
			
	  for (int i = length - n ; i < length && j < n; i++ , j++)
		  {
			  arr[i] = mat[j] ;
		  }

	  cout << endl;

	  for (int i = 0; i < length; i++)	
		  cout << arr[i] << " ";
	  








	cout<<endl;

  return 0;
}