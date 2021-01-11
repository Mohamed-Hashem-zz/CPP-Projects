#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

int main()
{ 	
	speed ;

    Date d1 , d3(12,12,2012) ;

    d1.DisplayDate();

    cout << endl;

    d3.DisplayDate();

    cout << endl;

    for (int i = 0; i < 150 ; i++)
      {
           d3.DisplayDate();
           d3.tickFunction();
        } 

     cout << endl;
 return 0;
}