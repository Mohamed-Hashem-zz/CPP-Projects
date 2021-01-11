#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <functional>
#include <algorithm>
#include <ctime>
#include "SavingsAccount.h"

using namespace std; 

int main()
{
    srand (time(NULL) );

    SavingsAccount  saver1 (2000 , 0.03) , saver2 (3000, 0.03 ) ;

    saver1.DisplayAccountYear();
    saver1.DisplayAccountMonthly();

    cout <<"\n***************************************" ;

    saver2.DisplayAccountYear();
    saver2.DisplayAccountMonthly();

    cout <<"\n***************************************" << endl ;

    saver1.setAnnualInterestRate (0.04);
    saver2.setAnnualInterestRate (0.04);

    cout << "Saver1 = " << saver1.modifyInterestRate() << " \t  Saver2 = " <<saver2.modifyInterestRate() << endl ; 

	return 0; 
} 