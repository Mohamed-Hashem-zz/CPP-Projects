#include "OverNightPackage.h"

OverNightPackage::OverNightPackage ( const string & S_Name , const string & S_address , const string & S_city , const string & S_state , int S_zip , const string & R_Name , const string & R_address , const string & R_city , const string & R_state , int R_zip , double w , double cost_per_ounces , double Extrafee ) : Package ( S_Name , S_address , S_city , S_state , S_zip , R_Name , R_address , R_city , R_state , R_zip , w , cost_per_ounces )
{
	setExtra_Day_Delivery_Fee ( Extrafee );
}

void OverNightPackage::setExtra_Day_Delivery_Fee ( double fee ) { Extra_Day_Delivery_Fee = fee < 0 ? 0.0 : fee ; }
double OverNightPackage::getExtra_Day_Delivery_Fee () { return Extra_Day_Delivery_Fee; }

double OverNightPackage::CalculateCost ()
{
	double cost = ( getExtra_Day_Delivery_Fee () + Package::getCostPerOunces () ) * Package::getWeight ();
	return cost;
}

void OverNightPackage::Print ()
{
	Package::Print ();
	cout << "The Extra Day Delivery Fee = " << getExtra_Day_Delivery_Fee () << endl;
}

OverNightPackage::~OverNightPackage ()
{
	cout << "The Destructor to the Over Night Package Class\n";
}
