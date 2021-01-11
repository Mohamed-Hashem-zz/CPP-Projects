#include "hugeInt.h"


hugeInt::hugeInt( long value )
{
	for ( int i = 0; i < digits ; i++ )
		numbers[i] = 0;

	for ( size_t i = digits - 1; value != 0 , i >= 0; i-- )
	{
		numbers[i] = value % 10;
		value /= 10;
	}	
}

hugeInt::hugeInt( const string &num )
{
	for ( int i = 0; i < digits; i++ )
		numbers[i] = 0;

	for ( int i = digits - num.length() , k = 0; i < digits; i++ , k++ )
	{
		if ( isdigit( num[k]) )
			numbers[i] = num[k] - '0' ;
	}
}

hugeInt hugeInt:: operator+ (const hugeInt & obj )
{
	hugeInt temp;
	short carry = 0;

	for ( size_t i = digits - 1; i >= 0 ; i-- )
	{
		temp.numbers[i] = numbers[i] + obj.numbers[i] + carry;
		if ( temp.numbers[i] > 9 )
		{
			temp.numbers[i] %= 10;
			carry = 1;
		}
		else
			carry = 0;
	}
	return temp;
}

hugeInt hugeInt:: operator+ ( int num ) { return *this + hugeInt( num ); }

hugeInt hugeInt:: operator+ ( const string & str ) { return *this + hugeInt( str ); }

ostream &operator<<( ostream & output , const hugeInt & op )
{
	int i;

	for ( i = 0; ( op.numbers[i] == 0 ) && ( i <= hugeInt::digits ) ; i++ );

	if ( i == hugeInt::digits )
		output << 0;
	else 
	   for ( ; i < hugeInt::digits; i++ )
		   output << op.numbers[i];

	return output;
}

