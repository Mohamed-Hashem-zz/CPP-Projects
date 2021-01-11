#include <iostream>
#include "TimeClass.h"
#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{    
    speed ;

    TimeClass t1;
    t1.universalTime();
    t1.standardTime();

    cout << "--------------------------------------" <<endl;

    TimeClass t2 (23,59,12);

    for (int i = 0 ; i < 60   ; i++)
        {                
              t2.standardTime();
              t2.tickFunction();
        }

    cout << "--------------------------------------" <<endl;

   TimeClass t3(12,5,6);
    t3.universalTime();
    t3.standardTime();

    cout << "--------------------------------------" <<endl;

    TimeClass t4(23,0,23);
    t4.universalTime();
    t4.standardTime();

        cout << "--------------------------------------" <<endl;
     
   TimeClass t5(23,62,23);
    t5.universalTime();
    t5.standardTime();

 return 0;
}