#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 0.0 ;

SavingsAccount::SavingsAccount() : SavingsBalance(0.0) 
    {
         annualInterestRate = 0.0 ;
    }

SavingsAccount :: SavingsAccount (double saveAccounts , double annualRate )
    { 
        SavingsBalance = (saveAccounts >= 0.0) ? saveAccounts : 0.0 ; 

        setAnnualInterestRate(annualRate);
    }

void SavingsAccount::setAnnualInterestRate (double annualRatr)  { annualInterestRate = (annualRatr >= 0.0) ? annualRatr : 0.0 ;}

double SavingsAccount::getAnnualInterestRate() { return annualInterestRate; }

void SavingsAccount::DisplayAccountYear()
    {   
         cout << fixed << setprecision(2) << endl;

         cout << "The Year Interest Year is  =  " << SavingsBalance * getAnnualInterestRate() << " $ " << endl;
    }

void SavingsAccount::DisplayAccountMonthly()
    {
    cout << fixed << setprecision(2) << endl;

        for (int i = 0; i < length; i++)
            {
                 cout << "The Month num " << i+1 << " \t the Savings Balance = " << modifyInterestRate() << " $ " << endl;
            }
    }
            
double SavingsAccount::modifyInterestRate()
    {
        SavingsBalance += ( SavingsBalance * ( getAnnualInterestRate() / 12 ) );
        return SavingsBalance ;
    }