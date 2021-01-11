#include "PieceWorker.h"


PieceWorker::PieceWorker ( const string & Fname , const string &Lname , const string & SSN , int day , int month , int year , double wage , int pieces ) : Employee ( Fname , Lname , SSN , day , month , year )
{
	setPieces ( pieces );
	setWages ( wage );
}

void PieceWorker::setPieces ( int pieces ) { this->Pieces = pieces; }
int PieceWorker::getPieces ( ) const { return Pieces; }

void PieceWorker::setWages ( double wage ) { this->Wage = wage; }
double PieceWorker::getWages ()const { return Wage; }

double PieceWorker::Earnings () const { return getWages () * getPieces (); }

void PieceWorker::Print ( )const
{
	Employee::Print ();
	cout << "The number of pieces which has been producted : " << getPieces () << endl;
	cout << "The Employee's Wage per pieces : " << getWages () << endl;
}

PieceWorker::~PieceWorker ()
{
	cout << "The Destructor of the PieceWorker class\n";
}
