#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include "TimeAndDate.h"

using namespace std;

int main()
{ 	
	speed ;

    TimeAndDate t1 (23,55,55,28,2,2012);

    for (int i = 0; i < 1000 ; i++)
        {  
            t1.displayStandardTime();
            t1.displayStandardDate();
            t1.tickDateAndTime();

            cout << endl;
        }

 return 0;
}