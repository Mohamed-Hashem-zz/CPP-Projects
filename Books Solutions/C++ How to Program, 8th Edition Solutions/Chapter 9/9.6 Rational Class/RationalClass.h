#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class RationalClass
    {
    private :
        float numerator;
        float denominator;
    public:
        RationalClass();
        RationalClass(float , float);
        void setRationalOperandes(float , float);
        void setNumerator(float);
        void setDenominator(float);
        float getNumerator();
        float getDeniminator();
        void displayFraction();
        void displayShapeObject();
        void displayReduceForm();
        void displayFloatPoint();

        RationalClass adding (RationalClass);
        RationalClass subtracting (RationalClass);
        RationalClass multiplying (RationalClass);
        RationalClass dividing (RationalClass);

    };

