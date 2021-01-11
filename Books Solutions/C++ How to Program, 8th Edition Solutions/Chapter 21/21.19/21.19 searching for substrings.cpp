// How To program 8th Edition 
// Number page of problem : 875 , question number : 21.19
// searching for substrings 


#include <bits\stdc++.h>
#include <algorithm>	
#include <iostream>
#include <iomanip>	
#include <bitset>	
#include <string>	
#include <cctype> 	
#include <cmath> 	
#include <cstdlib>	
#include <ctime>


using namespace std;

const int  length = 100;

int main()
{ 
  
	char arr[length] , search[5] , *ptr = nullptr;

	cin.getline(arr,length);

	cin.clear();

	cin>>search;

	ptr = strstr(arr,search);

	if(ptr)
	{
		
		cout<<" The remainder part of the sentance : " << arr << "\n which his fisrt occurance : "<< search << " is  : " << ptr; 
		
		ptr = strstr( ptr+1 , search) ; // to test , is there another remender 

		if(ptr)
					cout<<"The remainder part of the sentance : " << arr << " \n which his fisrt occurance : "<< search << "\n is  : " << ptr; 

		else
				cout<<" The Search Key Don't apper more than once " << endl; 
	

	}
	else
			cout << "The Search Key not  found " <<endl;

  return 0;
}