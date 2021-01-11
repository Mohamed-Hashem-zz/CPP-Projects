#include "Polynomials.h"


Polynomials::Polynomials() 
{
	exponent = 10  ;
	arr = new int[exponent];

	for ( size_t i = 0; i < exponent; i++ )
		arr[i] = 0;
}

Polynomials::Polynomials( Polynomials & poly)
{
	this->exponent = poly.exponent;

	arr = new int[this->exponent];

	for ( size_t i = 0; i < exponent; i++ )
		this->arr[i] = poly.arr[i];
}

Polynomials Polynomials::operator=( const Polynomials &poly )
{
	this->exponent = poly.exponent;

	arr = new int[this->exponent];

	for ( size_t i = 0; i < exponent; i++ )
		this->arr[i] = poly.arr[i];

	return *this;
}

Polynomials Polynomials:: operator+( const Polynomials &p )
{
	Polynomials result;
	result.exponent = ( this->exponent > p.exponent ) ? this->exponent : p.exponent;
	int k = this->exponent - 1 , j = p.exponent - 1;

	for ( size_t i = ( result.exponent ) - 1 ; i != -1 ; i-- )
	{
		if ( this->exponent > p.exponent && k > j )
		{
			result.arr[i] = this->arr[k];
			k--;
		}
		else if ( p.exponent > this->exponent && j > k)
		{
			result.arr[i] = p.arr[j];
			j--;
		}
		else
		{
			result.arr[i] = this->arr[k] + p.arr[j];
			k--;
			j--;
		}
	}
    	return result;
}

bool Polynomials::operator==(const Polynomials & poly)
{
	bool flag = true;

	for ( size_t i = ( this->exponent - 1 ); i != -1; i-- )
	{
		if ( this->arr[i] != poly.arr[i] )
		{
			flag = false;
			break;
		}
	}
     	return flag;
}

Polynomials Polynomials::operator-( const Polynomials &p )
{
	Polynomials result;

	result.exponent = ( this->exponent > p.exponent ) ? this->exponent : p.exponent;
	int k = this->exponent - 1 , j = p.exponent - 1 ;

	for ( size_t i = ( result.exponent ) - 1 ; i != -1 ; i-- )
	{
		if ( this->exponent > p.exponent && k > j )
		{
			result.arr[i] = this->arr[k];
			k--;
		}
		else if ( p.exponent > this->exponent && j > k )
		{
			result.arr[i] = p.arr[j];
			j--;
		}
		else
		{
			result.arr[i] = this->arr[k] - p.arr[j];
			k--;
			j--;
		}
	}
	return result;
}

Polynomials Polynomials::operator*( const Polynomials &p )
{
	Polynomials result;

	result.exponent = ( this->exponent > p.exponent ) ? this->exponent : p.exponent;
	int k = this->exponent - 1 , j = p.exponent - 1 ;

	for ( size_t i = ( result.exponent ) - 1 ; i != -1 ; i-- )
	{
		if ( this->exponent > p.exponent && k > j )
		{
			result.arr[i] = this->arr[k];
			k--;
		}
		else if ( p.exponent > this->exponent && j > k )
		{
			result.arr[i] = p.arr[j];
			j--;
		}
		else
		{
			result.arr[i] = this->arr[k] * p.arr[j];
			k--;
			j--;
		}
	}
	  return result;
}

Polynomials Polynomials::operator*( const int &p )
{
	Polynomials result;
	result.exponent = this->exponent;

	for ( size_t i = result.exponent - 1; i != -1 ; i++ )
		result.arr[i] = this->arr[i] * p;

	return result;
}

Polynomials Polynomials::operator+=( const Polynomials &p )
{
	*this = *this + p;
	return *this;
}

Polynomials Polynomials:: operator-=( const Polynomials &p )
{
	*this = *this - p;
	return *this;
}

Polynomials Polynomials:: operator*=( const Polynomials &p )
{
	*this = *this * p;
	return *this;
}

Polynomials Polynomials:: operator*=( const int &p )
{
	for ( size_t i = 0; i < this->exponent; i++ )
		this->arr[i] *= p;

	return *this;
}

int &Polynomials :: operator[]( int &subscript )
{
	if ( subscript >= 0 && subscript < exponent )
		return arr[subscript];
	else
		throw out_of_range( "the subscript is put of the range" );
}

istream &operator>>( istream &input , Polynomials &equation )
{
	cout << "Enter the Number of Terms:";
	input >> equation.exponent;

	if ( equation.exponent >= 10 )
		cout << "The Expontent Shouldn't exceed the 7 exponents" , exit( 0 );

	equation.arr = new int[equation.exponent];

	for ( size_t i = ( equation.exponent ) - 1 ; i >= 0 && i != -1 ; i-- )
	{
		cout << "the term num " << i << " is : ";
		input >> equation.arr[i] ;
	}
    	return input;
}

ostream &operator<<( ostream &output , Polynomials &equation )
{
	output << "The full Equation is : ";

	for ( size_t i = equation.exponent - 1; i >= 0 && i != -1 ; i-- )
	{
		if ( ( equation.arr[i] > 0 && i == 1 ) || ( equation.arr[i] < 0 && i == 1 ) )
			output << equation.arr[i] << "x" <<" + ";

		else if ( equation.arr[i] != 0 && i == 0 )
			output << equation.arr[i];
		
		else if ( equation.arr[i] != 0 )
			output << equation.arr[i] << "x^" << i << " + ";
	}
	  output << "\n-------------------------------------------\n";
	return output;
}

Polynomials::~Polynomials()
{
	delete[] arr;
}
