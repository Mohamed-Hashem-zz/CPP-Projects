#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Package
{
protected :
	string senderName;
	string senderAddress;
	string senderCityName;
	string senderStateName;
	int senderZipCode;

	string RecipientName;
	string RecipientAddress;
	string RecipientCityName;
	string RecipientStateName;
	int RecipientZipCode;

	double Weight;
	double costPerOunces;

public:
	Package ( const string & , const string & , const string & , const string & , int  , const string & , const string & , const string & , const string & , int = 0 , double = 0 , double = 0 );
	
	void setSenderName ( const string & );
	string getSenderName ( );
	
	void setSenderAddress ( const string & );
	string getSenderAddress ( );
	
	void setSenderCityName ( const string & );
	string getSenderCityName ( );
	
	void setSenderStateName ( const string & );
	string getSenderStateName ( );
	
	void setSenderZipCode ( int );
	int getSenderZipCode ( );

	void setRecipientName ( const string & );
	string getRecipientName ( );
	
	void setRecipientAddress ( const string & );
	string getRecipientAddress ( );
	
	void setRecipientCityName ( const string & );
	string getRecipientCityName ( );
	
	void setRecipientStateName ( const string & );
	string getRecipientStateName ( );
	
	void setRecipientZipCode ( int );
	int getRecipientZipCode ( );

	void setWeight(double );
	double getWeight ();

	void setCostPerOunces (double );
	double getCostPerOunces ();
	
	virtual double CalculateCost ();
	virtual void Print ();
	~Package ();
};

