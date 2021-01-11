#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int length = 12 ;
class SavingsAccount
    {
    private:
            static double annualInterestRate ;
            double SavingsBalance;
    public:
        SavingsAccount();
        SavingsAccount(double , double ) ;
        void setAnnualInterestRate(double);
        double getAnnualInterestRate();
        double modifyInterestRate();
        void DisplayAccountYear();
        void CalculateMonthlyInterest();
        void DisplayAccountMonthly();
    };
