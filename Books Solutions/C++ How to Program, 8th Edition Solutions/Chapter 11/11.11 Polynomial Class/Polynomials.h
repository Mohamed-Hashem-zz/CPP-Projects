#pragma once
#include <iostream>
#include <cctype>
#include <exception>
using namespace std;

class Polynomials
{
	private:
	int *arr;
	int exponent;
	friend istream &operator>>( istream & , Polynomials & );
	friend ostream &operator<<( ostream & ,Polynomials & );

	public:
	Polynomials( );
	Polynomials( Polynomials &);
	Polynomials operator+( const Polynomials & );
	bool operator==(const Polynomials & );
	Polynomials operator-(const Polynomials & );
	Polynomials operator*( const Polynomials & );
	Polynomials operator=( const Polynomials & );
	Polynomials operator+=( const Polynomials & );
	Polynomials operator-=( const Polynomials & );
	Polynomials operator*=( const Polynomials & );
	Polynomials operator*=( const int & );
	Polynomials operator*( const int & );

	int &operator[]( int & );
	~Polynomials();
};

