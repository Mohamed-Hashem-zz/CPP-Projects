#include "Account.h"

Account::Account(string name , int id , short password , double balance)
{
	setName(name);
	setId(id);
	setPassword(password);
	setBalance(balance);
}

inline void Account::setName(string name) { this->Name = name; }
inline string Account::getName() const { return Name; }

inline void Account::setId(int id) { this->Id = id; }
inline int Account::getId()const { return Id; }

inline void Account::setPassword(short password) { this->Password = ( password > 999 && password <= 9999 ) ? password : 4444; }
inline short Account::getPassword()const { return Password; }

inline void Account::setBalance(double balance) { this->TotalBalance = ( balance >= 1 ) ? balance : 0; }
inline double Account::getBalance()const { return TotalBalance; }

void Account::create_New_Account()
{
	cout << "\n\t\tEnter Client ID       : ";
	cin >> Id;

	cout << "\n\t\tEnter Client Name    : ";
	cin.ignore();
	getline(cin , Name);

	cout << "\n\t\tEnter Client Password << 4 digits [ 999-9999 ] >> : ";
	cin >> Password;

	cout << "\n\t\tEnter Client Balance  : ";
	cin >> TotalBalance;

	setName(Name);
	setId(Id);
	setPassword(Password);
	setBalance(TotalBalance);
}

void Account::depositAccount(double deposit) { TotalBalance += deposit; }

void Account::withdrawAccount(double withdraw) { TotalBalance -= withdraw; }

void Account::showAccount()const
{
	cout << "\t\t# " << getId() << "\t\t" << getName() << "\t\t" << getBalance() << endl;
}

void Account::modifyAccount()
{
	short choice;

	cout << "\t\tWhat do you want To modify for Name (1) , Password (2) , Balance (3) : ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "\n\n\t\tModify Account Holder Name : ";
			cin.ignore();
			getline(cin , Name);
			setName(Name);
			break;

		case 2:
			cout << "\n\t\tModify Password : ";
			cin >> Password;
			setPassword(Password);
			break;

		case 3:
			cout << "\n\t\tModify Balance amount : ";
			cin >> TotalBalance;
			setBalance(TotalBalance);
			break;

		default:
			cout << "\n\a\t\tEnter Valid input .... " << endl;
			break;
	}
}

Account::~Account()
{
	cout << "\n\t\tEnd xD" << endl;
}