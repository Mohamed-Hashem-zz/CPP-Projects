#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

class Time
{
public:
    Time();
    Time(int  , int  , int  );
    inline void setTime(int , int , int);
    inline void setHours(int);
    inline void setMinutes(int);
    inline void setSeconds(int);
    inline int getHours();
    inline int getMinutes();
    inline int getSeconds();
    void universalTime();
    void standardTime ();

private :
    int hours;
    int minutes ;
    int seconds;
};

