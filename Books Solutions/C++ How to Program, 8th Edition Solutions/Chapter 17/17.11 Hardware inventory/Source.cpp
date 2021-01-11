#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Store.h"
using namespace std;

const int length = 100;

void insertNewRecord ( fstream & ); // To make new Record
void deleteRecord ( fstream & ); // To Delete a record
void updateRecord ( fstream & ); // To update information about record
void PrintRecordData ( Store & ); // to Print data in record
void outPutData ( fstream &);
int ChoosingCase ();

enum Stutus { NewRecord = 1 , DeleteRecord , UpdateRecord , PrintRecords , End };

int main ( )
{
	Store store;
	fstream file;

	file.open ( "Hardware.dat" , ios::in | ios::out | ios::binary | ios::app );

	if ( file.fail () )
	{
		cerr << "\a\t This file is not Found" << endl;
		return 1; // to indicate the the program don't exit successfully.
	}

	for ( size_t i = 0; i < 100; i++ )
		file.write ( reinterpret_cast<char *> ( &store ) , sizeof ( Store ) );

	int choice = 0;

	while ( ( choice = ChoosingCase () ) != End )
	{
		switch ( choice )
		{
			case NewRecord:
				insertNewRecord ( file );
				break;

			case DeleteRecord:
				deleteRecord ( file );
				break;

			case UpdateRecord:
				updateRecord ( file );
				break;

			case PrintRecords:
				outPutData (file );
				break;

			case End:
				exit ( 1 );
				break;

			default:
				cout << "\a\n\tEnter Valid Choice" << endl;
				break;
		}
			cout << "\n-------------------------------------------------------------\n\n";
			file.clear ();   // reset end-of-file indicator
	}
     	return 0;
}

int ChoosingCase ()
{
	cout << "//////////////////////////////////\n";
	cout << "// 1 - to Make New Record       //\n";
	cout << "// 2 - to delete Record         //\n";
	cout << "// 3 - to Update Record         //\n";
	cout << "// 4 - to Print Records         //\n";
	cout << "// 5 - to End                   //\n";
	cout << "//////////////////////////////////\n\n";

	int choice = 0;
	cout << "Please ,Enter the Choice u need to performe : ";

	cin >> choice;

	return choice;
}

// output lists current records
void outPutData ( fstream &file )
{
	Store  store;	
	
	cout << left << setw ( 10 ) << "Record #" << left << setw ( 30 ) << "Tool Name" << left <<
		setw ( 10 ) << "Quantity" << right << setw ( 10 ) << "Cost" << endl;
	
	file.seekg ( 0 );
	file.read ( reinterpret_cast <char *> ( &store ) , sizeof ( Store ) );

	while ( file  && !file.eof ( ) )
	{
		if ( store.getRecordNumber () != 0 )
			PrintRecordData ( store );

		file.read ( reinterpret_cast <char *> ( &store ) , sizeof ( Store ) );
	}
}

void insertNewRecord ( fstream & file )
{
	int record;
	string toolName;
	int quantity;
	double cost;

	Store store;

	cout << "Enter The Record u want to insert : ";
	cin >> record;

	file.seekg ( ( record - 1 ) * sizeof( Store ) );
	file.read ( reinterpret_cast <char *> ( &store ) , sizeof( Store ) );

	if ( record != EOF )
	{
		cout << record << " - Enter Tool Name : ";
		cin.ignore ( );
		getline ( cin , toolName );

		cout << record << " - Enter The Quantity of the tools : ";
		cin >> quantity;

		cout << record << " - Enter The Cost of the this -> tool : ";
		cin >> cost;

		store.setCost ( cost );
		store.setQuantity ( quantity );
		store.setRecordNumber ( record );
		store.setToolName ( toolName );

		file.seekp ( ( store.getRecordNumber () - 1 ) * sizeof ( Store ) );
		file.write ( reinterpret_cast <char *> ( &store ) , sizeof ( Store ) );
	}
	  else
		  cerr << "\a\n\tCannot insert. The record contains information.\n";
}

void deleteRecord ( fstream & file)
{
	Store record;
	int choice_To_Delete = 0;

	cout << "Enter the Record u want to Delete it : ";
	cin >> choice_To_Delete; 

	file.seekg ( ( choice_To_Delete - 1 ) * sizeof( Store ) );
	file.read ( reinterpret_cast <char*> ( &record ) , sizeof ( Store ) );

	if ( record.getRecordNumber () != 0 )
	{
		file.seekp ( ( choice_To_Delete - 1 ) * sizeof( Store ) );
		file.write( reinterpret_cast <char*> ( &record ) , sizeof ( Store ) );

		cout << "\n\tRecord deleted.\n";
	}
	else 
		cerr << "\a\n\tCannot delete. The record is empty.\n";
}

void updateRecord ( fstream & file)
{
	int choice_To_Update = 0;
	string toolName;
	int quantity;
	double cost;
	Store store;

	cout << "\nchoice the record which will be Updating choose between (1-100) : ";
	
	cin >> choice_To_Update;

	Store record;

	file.seekg ( ( choice_To_Update - 1 ) * sizeof( Store ) );
	file.read ( reinterpret_cast <char*> ( &record ) , sizeof ( Store ) );

	if ( record.getRecordNumber () != 0 )
	{
		PrintRecordData ( record );

		cout  << " - Enter The Quantity of the tools : ";
		cin >> quantity;

		cout << " - Enter The Cost of the this -> tool : ";
		cin >> cost;

		store.setCost ( cost );
		store.setQuantity ( quantity );

		PrintRecordData ( record );

		file.seekp ( ( store.getRecordNumber () - 1 ) * sizeof( Store ) );
		file.write ( reinterpret_cast <char*> ( &record ) , sizeof ( Store ) );
	}
	else
		cerr << "\a\n\tRecord # ( " << choice_To_Update << " ) has no information to update it" << endl;
}

void PrintRecordData ( Store & s )
{
	cout << left << setw ( 10 ) << s.getRecordNumber () << left << setw ( 30 )
		<< s.getToolName () << left << setw ( 10 ) << s.getQuantity ()
		<< right << setw ( 10 ) << s.getCost () << fixed << setprecision ( 2 )
		<< showpoint << endl;
}