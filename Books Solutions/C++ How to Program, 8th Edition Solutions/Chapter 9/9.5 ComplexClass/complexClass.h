#pragma once
#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

class complexClass
    {
    private :
            float realPart , imaginePart ;
    public:
        complexClass();
        complexClass(float ,float  );
        inline void setComplexClass(float , float);
        inline void setRealPart(float );
        inline float  getRealPart();
        inline void setImaginePart(float);
        inline float getImaginePart();
        void displayComplexNumber();
        complexClass sumtion(complexClass );
        complexClass subtract(complexClass );
    };
