#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include <cmath>
#include <complex>
#include "complexClass.h"

using namespace std;

int main()
{ 	
	speed ;

    complexClass c0 , c1 (5.8,12) , c2 (12,-3.2) , c3 , c4;

    c0.displayComplexNumber();

    c1.displayComplexNumber();

    c2.displayComplexNumber();

    c3 = c1.sumtion(c2);

    c3.displayComplexNumber();

    c4 = c1.subtract(c2) ;

    c4.displayComplexNumber();

    c1.setComplexClass(4,6);
    c2.setComplexClass(3.3,-2.7);

    c3 = c1.sumtion(c2);

    c3.displayComplexNumber();

 return 0;
}