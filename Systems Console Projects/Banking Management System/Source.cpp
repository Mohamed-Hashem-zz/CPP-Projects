#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Account.h"
using namespace std;

double amount;
int Acc_Num;
short pass;

void Introduction();
void MainMenu();

void Write_Account();
void Display_SpecialAccount(int);
void Display_All_Accounts();
void Delete_Account(int);
void Modify_Account(int);
void Deposite_Account(int);
void Withdraw_Account(int);

int main()
{
	int Acc_Num = 0;

	Introduction();
	MainMenu();

	short choice;

	cout << "\n\t\tSelect Your Option [ 1 - 8 ]  : ";
	cin >> choice;

	while (choice != 8)
	{
		Acc_Num = 0;

		switch (choice)
		{
			case 1:
				Write_Account();
				break;

			case 2:
				cout << "\n\t\tEnter The Number of Record : ";
				cin >> Acc_Num;
				Deposite_Account(Acc_Num);
				break;

			case 3:
				cout << "\n\t\tEnter The Number of Record : ";
				cin >> Acc_Num;
				Withdraw_Account(Acc_Num);
				break;

			case 4:
				cout << "\n\t\tEnter Account Number : ";
				cin >> Acc_Num;
				Display_SpecialAccount(Acc_Num);
				break;

			case 5:
				Display_All_Accounts();
				break;

			case 6:
				cout << "\n\t\tEnter The Number of Record : ";
				cin >> Acc_Num;
				Delete_Account(Acc_Num);
				break;

			case 7:
				cout << "\n\t\tEnter The Number of Record : ";
				cin >> Acc_Num;
				Modify_Account(Acc_Num);
				break;

			case 8:
				exit(0);
				break;

			default:
				cout << "\a\n\n\t\tEnter Valid Choice\n";
				MainMenu();
				break;
		}

		MainMenu();
		cout << "\n\t\tSelect Your Option [ 1 - 8 ]  : ";
		cin >> choice;
	}
	cout << endl;
	return 0;
}

void Introduction()
{
	cout << "\n\t\t#################################\n";
	cout << "\t\t#\t\t\t\t#\n";
	cout << "\t\t# \tBank\t\t\t#\n";
	cout << "\t\t#\t\t\t\t#\n";
	cout << "\t\t#\t     Mangement \t\t#\n";
	cout << "\t\t#\t\t\t\t#\n";
	cout << "\t\t#\t\t\tSystem \t#\n";
	cout << "\t\t#\t\t\t\t#\n";
	cout << "\t\t#################################\n\n";
	cout << "\t\tMade by : Mohamed Hashem\n\n";
	cout << "\t\tCollege : Faculty of Science Menoufia Universty\n\n";
	cout << "\t\tDate    : 30 / 6 / 2020\n\n";
	cout << "\t\tPress Enter To Continue ....";
	cin.get();
}

void MainMenu()
{
	system("cls");
	cout << "\n\n\t\tMain Menu\n\n";
	cout << "\t\t1 - New Account\n";
	cout << "\t\t2 - Deposite Amount\n";
	cout << "\t\t3 - Withdraw Amount\n";
	cout << "\t\t4 - Display Special Account\n";
	cout << "\t\t5 - Display All Accounts in List\n";
	cout << "\t\t6 - Delete an Account\n";
	cout << "\t\t7 - Modify an Account\n";
	cout << "\t\t8 - Exit\n";
}

//********************************************************************
//    	function to write in file
//********************************************************************

void Write_Account()
{
	Account acc;
	ofstream outFile;
	outFile.open("Accounts.dat" , ios::app | ios::binary);
	acc.create_New_Account();
	outFile.write(reinterpret_cast<char*>( &acc ) , sizeof(Account));
	outFile.close();
}

//****************************************************************
//    	function to read specific record from file
//****************************************************************

void Display_SpecialAccount(int ac_Number)
{
	Account acc;
	ifstream readFile;
	readFile.open("Accounts.dat" , ios::binary);

	if (!readFile)
	{
		cerr << "\a\n\t\tFile could not open !! Press any Key...\n";
		cin.get();
		return;
	}

	cout << "\n\t\tAccount Details\n";

	bool flag = false;

	while (readFile.read(reinterpret_cast<char *>( &acc ) , sizeof(Account)))
	{
		if (acc.getId() == ac_Number)
		{

			acc.showAccount();
			flag = true;
		}
	}

	readFile.close();

	if (!flag)
	{
		cerr << "\a\n\t\tThis Record is not Found , !! Press any Key....\n";
		cin.get();
	}
}

//***************************************************************
//    	function to display all accounts deposit list
//****************************************************************

void Display_All_Accounts()
{
	Account acc;
	ifstream file;
	file.open("Accounts.dat" , ios::binary);

	if (!file)
	{
		cerr << "\a\n\t\tFile could not open !! Press any Key...";
		cin.get();
		return;
	}

	cout << "\n\t\t#################################################\n";
	cout << "\t\t# Ac.ID " << setw(8) << ' ' << "UserName " << setw(15) << ' ' << "Balance #\n";

	while (file.read(reinterpret_cast<char*>( &acc ) , sizeof(Account)))
		acc.showAccount();

	file.close();
}

//***************************************************************
//    	function to delete record of file
//****************************************************************

void Delete_Account(int acc_Number)
{
	bool found = false;
	Account acc;
	ifstream deleteFile;
	ofstream tempFile;
	deleteFile.open("Accounts.dat" , ios::binary);

	if (deleteFile.fail())
	{
		cerr << "\a\n\t\tFile could not open !! Press any Key...";
		cin.get();
		return;
	}

	//read file line by line starting at begining
	cout << "\n\t\tAccount Details\n";

	tempFile.open("temp.dat" , ios::binary);
	deleteFile.seekg(0 , ios::beg);

	while (deleteFile.read(reinterpret_cast<char*>( &acc ) , sizeof(Account)))
	{
		if (acc_Number != acc.getId())
			tempFile.write(reinterpret_cast<char *>( &acc ) , sizeof(Account));
	}

	tempFile.close();
	deleteFile.close();

	remove("Accounts.dat");

	//rename temp as original
	rename("temp.dat" , "Accounts.dat");

	cout << "\n\t\tRecord Deleted ...";
}

//***************************************************************
//    	function to modify record of file
//****************************************************************

void Modify_Account(int Ac_Num)
{
	Account acc;
	fstream modify_File("Accounts.dat" , ios::in | ios::out | ios::binary);

	if (!modify_File)
	{
		cerr << "\a\n\t\tFile could not open !! Press any Key...";
		cin.get();
		return;
	}

	cout << "\n\t\tAccount Details\n";

	bool flag = false;

	while (!modify_File.eof() && !flag)
	{
		modify_File.read(reinterpret_cast<char*>( &acc ) , sizeof(Account));

		if (acc.getId() == Ac_Num)
		{
			acc.showAccount();

			cout << "\n\t\tEnter The New Details of account\n\n";
			acc.modifyAccount();

			// have a pointer at the start of the account
			int pos = -1 * static_cast<int>( sizeof(Account) );

			// goes to the line before data entry
			modify_File.seekp(pos , ios::cur);

			// writes over old data
			modify_File.write(reinterpret_cast<char*> ( &acc ) , sizeof(Account));

			cout << "\n\t\tRecord Modifed ...";
			flag = true;
		}
	}

	modify_File.close();

	if (!flag)
		cerr << "\a\n\t\tThis Record is consisting of empty imforamtion\n";
}

//***************************************************************
//    	function to deposit amounts
//****************************************************************

void Deposite_Account(int Ac_Num)
{
	Account acc;

	fstream deposite_file;
	deposite_file.open("Accounts.dat" , ios::out | ios::binary | ios::in);

	if (!deposite_file)
	{
		cerr << "\a\n\t\tFile could not open !! Press any Key...";
		return;
	}

	cout << "\n\t\tAccount Details\n";

	bool flag = false;

	while (!deposite_file.eof() && !flag)
	{
		deposite_file.read(reinterpret_cast <char*> ( &acc ) , sizeof(Account));

		if (acc.getId() == Ac_Num)
		{
			acc.showAccount();

			cout << "\n\n\t\tEnter The amount to be deposited : ";
			cin >> amount;

			acc.depositAccount(amount);

			// Pointer to the Start of the Line
			int pos = ( -1 ) * static_cast <int> ( sizeof(Account) );

			// goes to the line before data entry
			deposite_file.seekp(pos , ios::cur);

			// writes over old data
			deposite_file.write(reinterpret_cast<char*> ( &acc ) , sizeof(Account));
			cout << "\n\t\tRecord Deposited";
			flag = true;
		}
	}
	deposite_file.close();

	if (!flag)
	{
		cerr << "\a\n\t\tThis Account Number is not Found , please enter valid number ... \n";
		cin.get();
	}
}

//***************************************************************
//    	function to withdraw amounts
//****************************************************************

void Withdraw_Account(int Ac_Num)
{
	Account acc;

	fstream withdraw_file("Accounts.dat" , ios::out | ios::binary | ios::in);

	if (withdraw_file.fail())
	{
		cout << "\a\n\t\tFile could not open !! Press any Key...";
		cin.get();
		return;
	}

	bool flag = false;

	cout << "\n\t\tAccount Details\n";

	while (!withdraw_file.eof() && !flag)
	{
		withdraw_file.read(reinterpret_cast <char*> ( &acc ) , sizeof(Account));

		if (acc.getId() == Ac_Num)
		{
			acc.showAccount();

			cout << "\n\n\t\tEnter The amount to be Withdraw : ";
			cin >> amount;

			double money = acc.getBalance() - amount;

			if (amount > acc.getBalance())
				cout << "\n\t\tInsufficience balance\n";
			else
				acc.withdrawAccount(amount);

			// Pointer to the Start of the Line
			int pos = ( -1 ) * static_cast <int> ( sizeof(Account) );

			// goes to the line before data entry
			withdraw_file.seekp(pos , ios::cur);

			// writes over old data
			withdraw_file.write(reinterpret_cast<char*> ( &acc ) , sizeof(Account));
			cout << "\n\n\t\tRecord Updated";
			flag = true;
		}
	}

	withdraw_file.close();

	if (!flag)
		cerr << "\a\n\t\tThis Account Number is not Found\n";
}