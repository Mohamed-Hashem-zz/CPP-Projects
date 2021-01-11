#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

class Account
{
private:
	string Name;
	int Id;
	short Password;
	double TotalBalance;

	inline void setPassword(short);
	inline void setName(string);
	inline void setBalance(double);
	inline void setId(int);

public:
	Account(string = "No Name" , int Id = 0 , short Password = 4444 , double TotalBalance = 0);

	void create_New_Account();
	void depositAccount(double);
	void withdrawAccount(double);
	void showAccount()const;
	void modifyAccount();

	inline int getId()const;
	inline short getPassword()const;
	inline string getName()const;
	inline double getBalance()const;

	~Account();
};