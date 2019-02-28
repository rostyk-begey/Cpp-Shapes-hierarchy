#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;
class Triangle:
	public Shape
{
private:
	double side;
public:
	Triangle(double a = 1.0): side(a) {};
	~Triangle();

	void printAsciiImg()
	{
		cout << "Triangle" << endl;
	}
};
