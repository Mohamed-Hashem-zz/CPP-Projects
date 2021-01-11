#include "Date.h"

Date :: Date ()
    {

        time_t now = time(0);

        tm *timeLocal = localtime ( &now);

        int d = timeLocal->tm_mday ;
        int m = 1 + timeLocal ->tm_mon ;
        int y = 1900 + timeLocal ->tm_year ;

        setDate ( d , m , y );
    }

Date :: Date (unsigned int d ,unsigned int m ,unsigned int y )   { setDate(d ,m , y) ; }

void Date ::setDate(unsigned int d ,unsigned int m ,unsigned int y)
    {
        setDay(d);
        setMonth(m);
        setYear(y);
    }

void Date ::setMonth(unsigned int m )
    { 
         if( m >=1 && m <=12 )
             months = m ;
        else
            cout <<"\aError , unValid Value" << endl , exit(0);
    }
void Date ::setDay(unsigned int d ) 
    { 
         if( d >= 1 && d <= dayMonths() )
                days = d ;
        else
                cout <<"\aError , unValid Value" << endl , exit(0);
    }
void Date ::setYear(unsigned int y )  
    { 
          if ( y >= 1999)
                years = y ;
           else
                cout <<"\aError , unValid Value" << endl , exit(0);
    }

int Date ::getDay () { return days ; }

int Date ::getMonth () { return months; }

int Date ::getYear () { return years ; }

void Date :: DisplayDate() {  cout << getDay() << " / " << getMonth()<<" / " << getYear() << endl; }

void Date:: tickFunction()
    {
    if (getDay() < dayMonths())
        setDay( getDay() + 1 );
    else
        {
           setDay(1);

             if ( getMonth() < 12 )
                 setMonth(getMonth() + 1 );
             else
                 {
                    setMonth(1);
                    setYear(getYear() + 1 );                
                 }
        }
    }

int Date::dayMonths( )
    {              
        if ( getMonth() % 2 == 1 || getMonth() == 6 || getMonth() == 12)
            dayMonth = 31 ;

        else if  ( getMonth() == 2 &&  (   getYear() % 400 == 0 || ( getYear() % 4 == 0 && getYear() % 100 != 0) ) ) 
            dayMonth = 29  ;

        else if (getMonth() == 2 )
            dayMonth = 28 ;

        else 
            dayMonth = 30;

        return dayMonth ;
    }