#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

class TimeAndDate
    {
    private:
        int hours ;
        int minutes;
        int seconds;
        int days ; 
        int months;
        int years;
        int dayMonth;
    public:
        TimeAndDate();
        TimeAndDate(int , int , int , int ,int ,int );
        void setTime( int , int , int);
        void setDate(int , int , int);
        void setDays (int );
        void setMonths(int );
        void setYears(int);
        int getDays() ;
        int getMonths();
        int getYears();
        void setHours(int);
        void setMinutes(int);
        void setSeconds(int);
        int getHours();
        int getMinutes();
        int getSeconds();
        void displayUniversalTime();
        void displayStandardTime();
        void tickTimeFunction();
        void displayUniversalDate();
        void displayStandardDate();
        void tickDateFunction();
        void tickDateAndTime();
        int dayMonths();
        bool leapYear();

    };

