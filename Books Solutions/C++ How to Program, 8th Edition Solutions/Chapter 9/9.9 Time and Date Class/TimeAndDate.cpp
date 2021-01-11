#include "TimeAndDate.h"

TimeAndDate::TimeAndDate()
    {  
        time_t now = time(0);
        tm *localTime = localtime(&now);

        int hour = localTime-> tm_hour ;
        int min = localTime-> tm_min;
        int sec = localTime -> tm_sec ;

        int day = localTime ->tm_mday  ;
        int month = 1 + localTime ->tm_mon ;
        int year = 1900 + localTime->tm_year;

         setTime( hour , min , sec );
         setDate(day , month, year);
    }

TimeAndDate :: TimeAndDate (int hour , int min , int sec , int day , int month , int year) 
    { 
        setDate(day ,month, year) ; 
        setTime(hour , min , sec) ; 
    }

void TimeAndDate::setDate(int day , int month , int year )
    {
        setDays(day);
        setMonths(month);
        setYears(year);
    }

void TimeAndDate :: setTime(int hour , int min , int sec)
    {
        setHours(hour);
        setMinutes(min);
        setSeconds(sec);
    }

void TimeAndDate :: setDays(int day)   
    {
        if (day >=1 && day <= dayMonths() )
             days = day;
        else
            cout << "\aU have Entered unValid Day" << endl , exit(0);
    }

void TimeAndDate :: setMonths(int month)
    {
        if (month >=1 && month <= 12 )
            months = month;
        else
            cout << "\aU have Entered unValid Month" << endl , exit(0);
    }

void TimeAndDate :: setYears(int year)
    {
        if (year >= 1900 )
            years = year ;
        else
            cout << "\aU have Entered unValid Year" << endl , exit(0);
    }

int TimeAndDate :: getDays() { return days ; }
int TimeAndDate :: getMonths() { return months ; }
int TimeAndDate :: getYears() { return years ; }

void TimeAndDate :: setHours(int h)
    {
        if (h >= 0 , h < 24)
             hours = h;
           else 
               cout << "\au have Entered unValid hour please Try again" << endl , exit(0);
    }

void TimeAndDate::setMinutes(int min)
    {
        if (min >= 0 && min < 60 )
            minutes = min ; 
           else 
               cout << "\au have Entered unValid Minutes please Try again" << endl , exit(0);
    }         

void TimeAndDate ::setSeconds(int sec)
    {
        if (sec >= 0 && sec < 60 )
            seconds = sec ; 
          else 
               cout << "\au have Entered unValid Seconds please Try again" << endl , exit(0);
    }
int TimeAndDate :: getHours() { return hours ; }
int TimeAndDate :: getMinutes() { return minutes ; }
int TimeAndDate :: getSeconds() { return seconds ; }

void TimeAndDate :: displayUniversalTime()
    {
        cout << setfill('0') << setw(2) << getHours() << " : " << setw(2) 
             << getMinutes()  << " : " << setw(2) << getSeconds() << "  ->>>  ";
    }

void TimeAndDate::displayStandardTime()
    {
        if (getHours() == 0 )
           cout << setfill('0') << setw(2) ;

           cout << ( ( getHours() <= 12 && getHours() >= 0  ) ? getHours() : getHours() % 12 ) 
                << " : " << setw(2) << getMinutes() << " : " << setw(2) << getSeconds() 
                << ( (hours < 12 ) ? " AM" : " PM" ) << "  ->>>  ";
    }

void TimeAndDate :: tickTimeFunction()
    {
    if ( getSeconds() < 59)
        setSeconds( getSeconds() + 1 );
    else
        {
          setSeconds(0);

          if (getMinutes() < 59 )
              setMinutes( getMinutes() + 1 );
          else
              {
                setMinutes(0);

                if ( getHours() < 23 )
                    setHours( getHours() + 1 );
                else
                    {
                        setHours(0);   
                        setMinutes(0);
                        setSeconds(0);
                    }
              }
        }

    }

void TimeAndDate::displayUniversalDate()
    {
       cout << setfill('0') << setw(2) << getDays() << " / " << setw(2) 
             << getMonths() << " / " << getYears() << endl;
    }

void TimeAndDate :: displayStandardDate ()
    {
        cout <<  getDays() << " / " << getMonths() << " / " << getYears() << endl;
    }

void TimeAndDate :: tickDateFunction()
    {
    if ( getDays () < dayMonths() )
        setDays( getDays() + 1);
    else
        {
            setDays(1);

            if (getMonths() < 12 )
                setMonths ( getMonths() + 1 );
            else
                {
                     setMonths(1);

                     setYears(getYears() + 1);
                }
        }

    }

void TimeAndDate::tickDateAndTime()
    {
        if ( getSeconds() < 59)
        setSeconds( getSeconds() + 1 );
    else
        {
          setSeconds(0);

          if (getMinutes() < 59 )
              setMinutes( getMinutes() + 1 );
          else
              {
                setMinutes(0);

                if ( getHours() < 23 )
                   {
                      setHours( getHours() + 1 );
                   }
                else
                    {
                        setHours(0);   
                        setMinutes(0);
                        setSeconds(0);

                        if ( getDays () < dayMonths() )
                                    {
                                        setDays( getDays() + 1);
                                    }
                            else
                                {
                                    setDays(1);

                                    if (getMonths() < 12 )
                                          setMonths ( getMonths() + 1 );
                                        else
                                            {
                                                    setMonths(1);

                                                    setYears(getYears() + 1);
                                     }
                             }
                      }
               }
         }
   }

int TimeAndDate::dayMonths( )
    {              
        if ( getMonths() % 2 == 1 || getMonths() == 6 || getMonths() == 12)
            dayMonth = 31 ;

        else if  ( getMonths() == 2 &&  (   getYears() % 400 == 0 || ( getYears() % 4 == 0 && getYears() % 100 != 0) ) ) 
            dayMonth = 29  ;

        else if (getMonths() == 2 )
            dayMonth = 28 ;

        else 
            dayMonth = 30;

        return dayMonth ;
    }