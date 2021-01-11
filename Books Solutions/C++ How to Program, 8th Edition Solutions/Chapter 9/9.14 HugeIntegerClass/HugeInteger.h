#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int length = 10;

class HugeInteger
    {
    private :
        double arr1[length] , arr2[length] , arr3[length];

    public:
        HugeInteger();
        HugeInteger(double * , double * );
        void setArrays(double * , double *) ;
        void setArray1(double * );
        void setArray2(double * );
        double* getArray1();
        double* getArray2();
        void displayArray1();
        void displayArray2() ;
        HugeInteger adding (HugeInteger);
        HugeInteger subtracting (HugeInteger);
        HugeInteger multuplying (HugeInteger);
        HugeInteger dividing (HugeInteger);
        HugeInteger modulusing (HugeInteger);
    };

