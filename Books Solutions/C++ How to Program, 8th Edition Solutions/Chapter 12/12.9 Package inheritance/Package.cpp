#include "Package.h"

Package::Package ( const string & S_Name , const string & S_address , const string & S_city , const string & S_state , int S_zip , const string & R_Name , const string & R_address , const string & R_city , const string & R_state , int R_zip , double w , double cost_per_ounces )

{
	setSenderName ( S_Name );
	setSenderAddress ( S_address );
	setSenderCityName ( S_city );
	setSenderStateName ( S_state );
	setSenderZipCode ( S_zip );
	
	setRecipientName ( R_Name );
	setRecipientAddress ( R_address );
	setRecipientCityName ( R_city );
	setRecipientStateName ( R_state );
	setRecipientZipCode ( R_zip );

	setWeight ( w );
	setCostPerOunces ( cost_per_ounces );
}

void Package::setSenderName ( const string & S_Name ) { senderName = S_Name ; }
string Package::getSenderName ( ) { return senderName; }

void Package::setSenderAddress ( const string & S_address ) { senderAddress = S_address; }
string Package::getSenderAddress ( ) { return senderAddress; }

void Package::setSenderCityName ( const string & S_city ) { senderCityName = S_city; }
string Package::getSenderCityName ( ) { return senderCityName; }

void Package::setSenderStateName ( const string & S_state ) { senderStateName = S_state; }
string Package::getSenderStateName ( ) { return senderStateName; }

void Package::setSenderZipCode ( int S_zip ) { senderZipCode = S_zip; }
int Package::getSenderZipCode ( ) { return senderZipCode; }

void Package::setRecipientName ( const string & R_Name ) { RecipientName = R_Name ; }
string Package::getRecipientName ( ) { return RecipientName; }

void Package::setRecipientAddress ( const string & R_address ) { RecipientAddress = R_address; }
string Package::getRecipientAddress ( ) { return RecipientAddress; }

void Package::setRecipientCityName ( const string & R_city ) { RecipientCityName = R_city; }
string Package::getRecipientCityName ( ) { return RecipientCityName; }

void Package::setRecipientStateName ( const string & R_state ) { RecipientStateName = R_state; }
string Package::getRecipientStateName ( ) { return RecipientStateName; }

void Package::setRecipientZipCode ( int R_zip ) { RecipientZipCode = R_zip; }
int Package::getRecipientZipCode ( ) { return RecipientZipCode; }

void Package::setWeight ( double w ) {  Weight = ( w < 0.00 ) ? 0.0 : w;  }
double Package::getWeight () { return Weight; }

void Package::setCostPerOunces ( double cost ) {  costPerOunces = ( cost < 0.00 ) ? 0.0 : cost;  }
double Package::getCostPerOunces () { return costPerOunces; }

double Package::CalculateCost ( )
{
	double cost = getCostPerOunces () * getWeight ();
	return cost;
}

void Package::Print ( )
{
	cout << fixed << setprecision ( 2 );
	cout << "The Sender Name : " << getSenderName ( ) << endl;
	cout << "The Sender Address : " << getSenderAddress ( ) << endl;
	cout << "The Sender City : " << getSenderCityName ( ) << endl;
	cout << "The Sender State : " << getSenderStateName ( ) << endl;
	cout << "The Sender Zip Code : " << getSenderZipCode () << endl << endl;

	cout << "The Recipient Name : " << getRecipientName ( ) << endl;
	cout << "The Recipient Address : " << getRecipientAddress ( ) << endl;
	cout << "The Recipient City : " << getRecipientCityName ( ) << endl;
	cout << "The Recipient State : " << getRecipientStateName ( ) << endl;
	cout << "The Recipient Zip Code : " << getRecipientZipCode () << endl << endl;

	cout << "The Weight = " << getWeight ( ) << endl;
	cout << "The Cost Per Ounces = " << getCostPerOunces ( ) << endl;
}

ostream & operator<<( ostream & output , Package & p )
{
	p.Print ();
	return output;
}

Package::~Package ()
{
	cout << "The Destructor of the base Package Class\n";
}