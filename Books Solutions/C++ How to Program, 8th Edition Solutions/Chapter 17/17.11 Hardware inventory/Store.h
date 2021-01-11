#pragma once
#include <iostream>
#include <string>
using namespace std;

class Store
{
private :
	int RecordNumber;
	string ToolName;
	int Quantity;
	double Cost;
public:
	Store ( int = 0 , string = "" , int = 0 , double = 0.0 );
	
	void setRecordNumber ( int );
	int getRecordNumber ( );
	
	void setToolName ( string );
	string getToolName ( );
	
	void setQuantity ( int );
	int getQuantity ( );
	
	void setCost ( double );
	double getCost (  );

	~Store ();
};

