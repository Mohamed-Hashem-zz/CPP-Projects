#pragma once
#include "Employee.h"
class PieceWorker : public Employee
{
private :
	double Wage;
	int Pieces;
public:
	PieceWorker ( const string & , const string & , const string & , int , int , int , double , int );
	
	void setPieces ( int );
	int getPieces ()const;

	void setWages ( double );
	double getWages ()const;

	double Earnings ()const;
	void Print ()const;
	~PieceWorker ();
};

