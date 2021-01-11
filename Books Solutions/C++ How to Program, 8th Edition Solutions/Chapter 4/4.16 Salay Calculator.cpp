#include <iostream>

using namespace std;

int main()
{

    double hours = 0, rateOfEmployee = 0, salary = 0 ;

    cout <<"Enter hours Worked (-1 to end): ";
    cin >>hours;

    while(hours!= -1)
    {
     cout <<"Enter hourly rate of the emplyee: ";
     cin>>rateOfEmployee;

     if (hours > 40)
            salary = hours * rateOfEmployee + ((hours - 40) * 5) ;
        else
            salary = hours*rateOfEmployee;

        cout <<"Salary is: $" << salary << endl;

        cout <<"\nEnter hours Worked (-1 to end): ";
        cin >>hours;
    }

        return 0;
}
