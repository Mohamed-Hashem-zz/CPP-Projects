#include "complexClass.h"

complexClass::complexClass () : realPart(0.0) , imaginePart(0.0) {}

complexClass::complexClass(float real , float imagine) 
    {
        setComplexClass(real , imagine);
    }       

inline void complexClass :: setComplexClass (float real , float imagine)
    {
          setRealPart(real) ; 
          setImaginePart(imagine) ;
    }

inline void complexClass :: setRealPart(float real)
    {
        realPart = real ;
    }
inline void complexClass :: setImaginePart(float imagine)
    {
        imaginePart =imagine ;
    }
inline float complexClass :: getRealPart()
    {
        return realPart ;
    }

inline float complexClass ::getImaginePart()
    {
        return imaginePart;   
    }
void complexClass :: displayComplexNumber()
    {
    char ch ;

     (getImaginePart() >= 0 ) ? ch = '+' : ch = '-' ;
       
         cout << "( "<< getRealPart() << " , " << getImaginePart() << " )" << endl;

         cout  <<  getRealPart() <<" " << ch  << " " << abs( getImaginePart()) << "i" << endl;
         cout << " --------------------------------- " << endl;
    }

complexClass complexClass :: sumtion (complexClass c)
    {
        complexClass temp ; 

        temp.realPart  = realPart + c.realPart;
        temp.imaginePart = imaginePart + c.imaginePart;     

        return temp;
    }
complexClass complexClass :: subtract (complexClass c)
    {
        complexClass temp ; 
        temp.realPart  = realPart - c.realPart;
        temp.imaginePart = imaginePart - c.imaginePart;     

        return temp;
    }

    