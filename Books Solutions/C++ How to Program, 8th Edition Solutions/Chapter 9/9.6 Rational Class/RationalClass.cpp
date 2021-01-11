#include "RationalClass.h"


RationalClass::RationalClass() : numerator(0) , denominator (0) {}

RationalClass :: RationalClass (float n , float d) 
    { setRationalOperandes(n,d); }

void RationalClass ::setRationalOperandes (float n , float d )
    {
        setNumerator(n);
        setDenominator(d);
    }
void RationalClass :: setNumerator(float n )
    {    numerator  = n ; }

float RationalClass :: getNumerator ()
    { return numerator ; }

void RationalClass::setDenominator (float d )
    {   denominator = d ; }

float RationalClass :: getDeniminator ()
    { return denominator ; }

void RationalClass :: displayFraction()
    {
            if ( getDeniminator() == 0 )
                cout << "unValid Value" << endl;
            else
            cout << "( " << getNumerator()  << " / " << getDeniminator() << " )" << endl; 
    }
void RationalClass :: displayReduceForm ()
    {
        cout << "( " << getNumerator()  << " / " << getDeniminator() <<" )"  ;
    }
void RationalClass :: displayFloatPoint ()
    {
         if(getDeniminator() == 0 )
            cout << "unValid Value" << endl;
         else
         cout << " = " ;
         cout << ( getNumerator() /  getDeniminator() ) << endl ;
    }
RationalClass  RationalClass :: adding ( RationalClass object)
    {
        RationalClass temp ;
        temp.numerator = numerator + object.numerator ;
        temp.denominator = denominator + object.denominator ;

        temp.displayReduceForm();
        temp.displayFloatPoint ();

        return temp;
    }
RationalClass  RationalClass ::subtracting ( RationalClass object)
    {
        RationalClass temp ;
        temp.numerator = numerator - object.numerator ;
        temp.denominator = denominator - object.denominator ;

        temp.displayReduceForm();
        temp.displayFloatPoint ();

        return temp;
    }
RationalClass  RationalClass :: multiplying ( RationalClass object)
    {
        RationalClass temp ;
        temp.numerator = numerator * object.numerator ;

        if ( denominator == 0 )
            cout <<"unValid Value" << endl;
        else
        temp.denominator = denominator * object.denominator ;

        temp.displayReduceForm();
        temp.displayFloatPoint ();

        return temp;
    }
RationalClass  RationalClass ::dividing ( RationalClass object)
    {
        RationalClass temp ;
        temp.numerator = numerator / object.numerator ;

        if ( denominator == 0 )
            cout << "unValid Value" << endl;
        else
        temp.denominator = denominator / object.denominator ;

        temp.displayReduceForm();
        temp.displayFloatPoint ();

        return temp;
    }