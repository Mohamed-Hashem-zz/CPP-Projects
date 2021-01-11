#include "TimeClass.h"

 TimeClass:: TimeClass() 
{
    time_t now = time(0);
    struct tm *localTime = localtime(& now);

    int h = localTime->tm_hour;
    int m = localTime->tm_min;
    int s = localTime->tm_sec;

    setTime ( h , m , s );
}

TimeClass ::TimeClass(int  hours , int minutes , int seconds)  { setTime (  hours , minutes, seconds ); }
    

inline void TimeClass::setTime( int h , int m , int s )
{
    setHours (h);
    setMinutes(m);
    setSeconds(s);
}

inline void TimeClass::setHours(int h )
{
  if ( h >=0 && h < 24 )
         hours = h ;
  else 
        cout << "\au have Entered unValid hour please Try again" << endl , exit(0);
}      

inline void TimeClass ::setMinutes (int m )
{
    if ( m >= 0 && m < 60 )
        minutes = m ;
    else 
          cout << "\au have Entered unValid Minutes please Try again" << endl , exit(0);
}

inline void TimeClass::setSeconds (int s )
{
    if (s >=0 && s < 60  )
           seconds = s ;
    else        
         cout << "\au have Entered unValid Seconds please Try again" << endl , exit(0);

}

inline int TimeClass::getHours ()
{
    return hours ;
}

inline int TimeClass::getMinutes ()
{
    return minutes ;
}
inline int TimeClass::getSeconds ()
{
    return seconds ;
}

void TimeClass::tickFunction()
{

    if ( getSeconds() < 59) 
                setSeconds ( getSeconds () +1 );

        else
            {
                setSeconds(0) ;

            if (getMinutes() < 59) 
                     setMinutes ( getMinutes() + 1 );

             else 
                 {
                    setMinutes (0);

                    if (getHours() < 23) 
                            setHours(getHours() + 1 );

                     else 
                         {
                            setHours(0);
                            setMinutes (0);
                            setSeconds(0) ;
                         }
                 }
            }
}

void TimeClass::universalTime()
{
    cout << setfill('0') << setw(2) << getHours() << " : " << setw(2) 
        << getMinutes() << " : " << setw(2) << getSeconds() << endl;
}

void TimeClass ::standardTime ()
{
    if (getHours() == 0 )
           cout << setfill('0') << setw(2) ;

   cout << ( ( getHours() <= 12 && getHours() >=0 ) ?  getHours() : getHours() % 12 ) <<  " : "  
        << setfill('0') << setw(2) << getMinutes() << " : " << setw(2) <<  getSeconds() 
        << ( ( getHours() < 12 ) ? " AM " : " PM "  )  << endl;
}
