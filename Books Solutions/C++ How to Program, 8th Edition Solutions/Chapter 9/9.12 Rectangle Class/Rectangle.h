#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
	float Length;
	float Width;
	
public:
	Rectangle (float [] , float [] , float [] , float []);
	void setCoord (float [] , float [] , float [] , float []);
	void setLength (float [] , float []);
	void setWidth (float [] , float []);
	float getLength ();
	float getWidth ();
	float getArea ();
	float getPerimeter ();
	bool SquareFunction ();
	void DisplayRectangle ();
	~Rectangle ();
};

