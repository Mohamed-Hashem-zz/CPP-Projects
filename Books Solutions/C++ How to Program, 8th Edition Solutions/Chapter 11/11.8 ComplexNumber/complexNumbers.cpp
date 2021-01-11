#include "complexNumbers.h"


complexNumbers::complexNumbers() :realNumber( 0 ) , imagineNumber( 0 ) {}

complexNumbers complexNumbers :: operator* ( complexNumbers & number ) const 
{
	complexNumbers temp;
	temp.imagineNumber = imagineNumber * number.imagineNumber;
	temp.realNumber = realNumber * number.realNumber;

	return temp;
}

complexNumbers complexNumbers :: operator+ ( complexNumbers & number )const
{
	complexNumbers temp;
	temp.imagineNumber = imagineNumber + number.imagineNumber;
	temp.realNumber = realNumber + number.realNumber;

	return temp; 
}
complexNumbers complexNumbers :: operator- ( complexNumbers & number )const
{
	complexNumbers temp;
	temp.imagineNumber = imagineNumber - number.imagineNumber;
	temp.realNumber = realNumber - number.realNumber;

	return temp;
}

complexNumbers &complexNumbers :: operator= ( complexNumbers & number )
{
	imagineNumber = number.imagineNumber;
	realNumber = number.realNumber;

	return *this;
}

bool complexNumbers::operator==( complexNumbers & number) const
{
	return ( realNumber == number.realNumber && imagineNumber == number.imagineNumber );
}

bool complexNumbers::operator!=( complexNumbers & number ) const
{
	return ( realNumber != number.realNumber && imagineNumber != number.imagineNumber );
}

istream &operator>>( istream &input , complexNumbers & number )
{
	cout << "Enter realNumber: ";
	input >> number.realNumber;

	cout << "Enter imagineNumber: ";
	input >> number.imagineNumber;
	return input;
}

ostream &operator<<( ostream & output , complexNumbers & number)
{
	if ( signbit( number.imagineNumber ) && number.imagineNumber != 0 )
		output << "the Complex Number is :" << number.realNumber << " - " << abs(number.imagineNumber) << " i";
	else if ( !signbit( number.imagineNumber ) && number.imagineNumber != 0 )
		output << "the Complex Number is :" << number.realNumber << " + " << number.imagineNumber << " i" ;
	else
		output << "the Complex Number is :" << number.realNumber;

	cout << "\n----------------------------------------\n";
	return output;
}






complexNumbers::~complexNumbers()
{
}
