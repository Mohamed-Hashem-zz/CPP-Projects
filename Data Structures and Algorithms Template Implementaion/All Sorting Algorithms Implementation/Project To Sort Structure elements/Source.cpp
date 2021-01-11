#include <iostream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <iomanip>	
#include <bitset>	
#include <string>
#include <cctype> 	
#include <cmath> 	
#include <cstdlib>	
#include <ctime>
#include <cstdio>
#include <vector>

using namespace std;

const int  length = 10;

struct Emplyee
{	string name;
	long long phoneNumber ; 
	int salay  ;
};

bool cmp1 (const Emplyee &first , const Emplyee &second);
bool cmp2(const Emplyee &first , const Emplyee &second);
bool cmp3 (const Emplyee &first , const Emplyee &second);

int main()
{ 
	ios_base :: sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	Emplyee emp [3] ;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter name / phone Number / Salay : " << endl;
		cin >> emp[i].name ;
		cin >> emp[i].phoneNumber ;
		cin >> emp[i].salay ;
	}

	cout << endl;

	sort(emp , emp+3,cmp2);

	for (int i = 0; i < 3; i++)
	{
		cout << emp[i].name << endl;
		cout << emp[i].phoneNumber << endl;
		cout << emp[i].salay << endl;
	}

	cout << endl;



	 cout << endl;
  return 0;
}

bool cmp1 (const Emplyee &first , const Emplyee &second)
{ 
		return 	 first.salay > second.salay	  ;
}
bool cmp2 (const Emplyee &first , const Emplyee &second)
{ 
	return 	 first.name > second.name	  ;
}
bool cmp3 (const Emplyee &first , const Emplyee &second)
{ 
	return 	 first.phoneNumber > second.phoneNumber	  ;
}