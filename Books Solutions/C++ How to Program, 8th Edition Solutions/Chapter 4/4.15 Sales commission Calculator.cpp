#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double money = 0 , Salary = 0;

    cout << fixed << setprecision(2) << "Enter Sales in dollars (-1 to end) :";
            cin >> money;

    while(money != -1)
    {
        Salary  =  200 + ( money * .09 ) ;
        cout << "Salary is: $" << Salary << endl;

         cout <<"\nEnter Sales in dollars (-1 to end) :";
            cin >> money;
    }
        return 0;
}
