#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const double pi = 3.1415;

class Shape
{
protected:
	double Length;
	double Width;
public:
	Shape ( double Length = 0 , double Width = 0 );

	void setLength ( double );
	double getLength ()const;

	void setWidth ( double );
	double getWidth ()const;

	virtual double getArea () = 0;
	virtual void Print () = 0;
	~Shape ();
};

