#include <iostream>
#include "Time.h"
#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{    
    speed ;

    Time t1;
    t1.universalTime();
    t1.standardTime();

    cout << "--------------------------------------" <<endl;

    Time t3(12,5,6);
    t3.universalTime();
    t3.standardTime();

    cout << "--------------------------------------" <<endl;

    Time t4(23,0,23);
    t4.universalTime();
    t4.standardTime();

        cout << "--------------------------------------" <<endl;
     
    Time t5(23,62,23);
    t5.universalTime();
    t5.standardTime();

 return 0;
}