#include <iostream>
#include <string>
#include "RationalClass.h"

using namespace std;

int main()
{ 	
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    RationalClass r1 ;
    r1.displayFraction();
    cout << " ---------- " << endl;

    RationalClass r2 (2,4) , r3 (5,1) , r4 , r5 , r6 , r7 , r8 , r9;

    cout << "First Fraction : " ;
    r2.displayFraction();

    cout <<"Second Fraction : " ;
    r3.displayFraction();
  
    cout << endl;

    cout << "the Adding of the Two Fraction : ";
    cout << "( " << r2.getNumerator() <<" / " << r2.getDeniminator() << " )"<< " + "
      << "( "<< r3.getNumerator() <<" / " << r3.getDeniminator() << " )" << " = " ;

    r4 = r2.adding(r3);

    cout << endl;

    cout << "the Subtracting of the Two Fraction : ";
          cout << "( " << r2.getNumerator() <<" / " << r2.getDeniminator() << " )"<< " - "
      << "( "<< r3.getNumerator() <<" / " << r3.getDeniminator() << " )" << " = " ;

    r5 = r2.subtracting(r3) ;
    cout << endl;

    cout << "the Multiplying of the Two Fraction : " ;

      cout << "( " << r2.getNumerator() <<" / " << r2.getDeniminator() << " )"<< " * "
      << "( "<< r3.getNumerator() <<" / " << r3.getDeniminator() << " )" << " = " ;

    r6 = r2.multiplying(r3);
    cout << endl;

    cout << "The Dividing of the Two Fractio : " ;
    
    cout << "( " << r2.getNumerator() <<" / " << r2.getDeniminator() << " )"<< " / "
      << "( "<< r3.getNumerator() <<" / " << r3.getDeniminator() << " )" << " = " ;

    r7= r2.dividing(r3);
    cout << endl;

 return 0;
}