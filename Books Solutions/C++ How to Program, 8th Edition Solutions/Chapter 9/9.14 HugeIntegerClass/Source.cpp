#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <functional>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "HugeInteger.h"

using namespace std;

int main()
{ 	
	speed ;

    srand(time(0));

    double a1[length] = {0}, a2[length] = {0} , a3[length], a4[length];

    for ( int i = 0; i < length ; i++)
        {
            a1[i] = rand() % 30;
            a2[i] = rand() % 30 ;
            a3[i] = 70 + rand() % (70 - 30 + 1);
            a4[i] = 70 + rand() % (70 - 30 + 1);
        }

    HugeInteger h1 , h2  , h3; 

    h1.setArray1(a1) ;
    h1.displayArray1();

    cout << endl;

    h2.setArray2(a2);
    h2.displayArray2();

    cout << "------------------------------------------------------------------------" << endl;

    h3 = h1.adding(h2);
    h3.displayArray1();

    cout << "------------------------------------------------------------------------" << endl;

    h3 = h1.subtracting(h2);
    h3.displayArray1();

    cout << "------------------------------------------------------------------------" << endl;

     h3 = h1.multuplying(h2);
    h3.displayArray1();

    cout << "------------------------------------------------------------------------" << endl;

     h3 = h1.dividing(h2);
    h3.displayArray1();

    cout << "------------------------------------------------------------------------" << endl;

     h3 = h1.modulusing(h2);
    h3.displayArray1();


 return 0;
}