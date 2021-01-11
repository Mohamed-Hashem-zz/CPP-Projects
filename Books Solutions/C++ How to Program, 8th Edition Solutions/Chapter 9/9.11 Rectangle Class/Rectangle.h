#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
	float Length;
	float Width;
	
public:
	Rectangle (float = 1 , float = 1);
	void setRect (float , float);
	void setLength (float);
	void setWidth (float);
	float getLength ();
	float getWidth ();
	float getArea ();
	float getPerimeter ();
	void DisplayRectangle ();
	~Rectangle ();
};

