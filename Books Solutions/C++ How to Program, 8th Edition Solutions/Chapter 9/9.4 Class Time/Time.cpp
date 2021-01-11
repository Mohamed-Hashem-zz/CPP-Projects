#include "Time.h"

Time::Time() 
{
    time_t now = time(0);
    struct tm *localTime = localtime(& now);

    int h = localTime->tm_hour;
    int m = localTime->tm_min;
    int s = localTime->tm_sec;

    setTime ( h , m , s );
}

Time::Time(int  hours , int minutes , int seconds)  { setTime (  hours , minutes, seconds ); }
    

inline void Time::setTime( int h , int m , int s )
{
    setHours (h);
    setMinutes(m);
    setSeconds(s);
}

inline void Time::setHours(int h )
{
  if ( h >=0 && h < 24 )
         hours = h ;
  else 
        cout << "\au have Entered unValid hour please Try again\n" << endl , exit(0);
}      

inline void Time ::setMinutes (int m )
{
    if ( m >= 0 && m < 60 )
            minutes = m ;
    else 
          cout << "\au have Entered unValid Minutes please Try again\n" << endl , exit(0);
}

inline void Time::setSeconds (int s )
{
    if (s >=0 && s < 60  )
           seconds = s ;
    else        
         cout << "\au have Entered unValid Seconds please Try again\n" << endl , exit(0);
}

inline int Time::getHours ()
{
    return hours ;
}

inline int Time::getMinutes ()
{
    return minutes ;
}
inline int Time::getSeconds ()
{
    return seconds ;
}


void Time::universalTime()
{
    cout << setfill('0') << setw(2) << getHours() << " : " << setw(2) 
        << getMinutes() << " : " << setw(2) << getSeconds() << endl;
}

void Time ::standardTime ()
{
    if (getHours() == 0 )
           cout << setfill('0') << setw(2) ;

   cout << ( ( getHours() <= 12 && getHours() >=0 ) ?  getHours() : getHours() % 12 ) <<  " : "  
        << setfill('0') << setw(2) << getMinutes() << " : " << setw(2) <<  getSeconds() 
        << ( ( getHours() < 12 ) ? " AM " : " PM "  )  << endl;
}
