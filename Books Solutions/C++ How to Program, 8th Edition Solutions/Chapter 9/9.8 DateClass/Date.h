#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

class Date
    {
    private:
        int days ;
        int months;
        int years;
        int dayMonth;
    public:
        Date();
        Date(unsigned int  ,unsigned int  ,unsigned int  );
        void setDate(unsigned int , unsigned int ,unsigned int);
        void setDay(unsigned int );
        void setMonth(unsigned int);
        void setYear(unsigned int);
        int getDay();
        int getMonth();
        int getYear();
        void DisplayDate();
        void tickFunction();
        int dayMonths();
        bool leapYear();
    };
