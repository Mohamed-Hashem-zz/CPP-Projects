#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage ( const string & S_Name , const string & S_address , const string & S_city , const string & S_state , int S_zip , const string & R_Name , const string & R_address , const string & R_city , const string & R_state , int R_zip , double w , double cost_per_ounces , double flatfee ) : Package ( S_Name , S_address , S_city , S_state , S_zip , R_Name , R_address , R_city , R_state , R_zip , w , cost_per_ounces )
{
	setTwo_Day_Delivery_Fee ( flatfee );
}

ostream& operator<<( ostream & output , TwoDayPackage & P)
{
	P.Print ();
	return output;
}

void TwoDayPackage::setTwo_Day_Delivery_Fee ( double flatfee )
{
	if ( flatfee > 0 )
		two_day_delivery_fee = flatfee;
	else
		cout << "\aFlatFee must be > 0\n";
}

double TwoDayPackage::getTwo_Day_Delivery_Fee () { return two_day_delivery_fee; }

double TwoDayPackage::CalculateCost ()
{
	double cost = getTwo_Day_Delivery_Fee() + Package::CalculateCost ();
	return cost;
}

void TwoDayPackage::Print ()
{
	Package::Print ();
	cout << "The Flat Fee = " << getTwo_Day_Delivery_Fee ( ) << endl;
}

TwoDayPackage::~TwoDayPackage ()
{
	cout << "The Destructor to the Two Day Package Class\n";
}
