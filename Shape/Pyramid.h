#pragma once
#include "VolumetricShape.h"
#include "Triangle.h"
class Pyramid :
	public VolumetricShape
{
private:
	Triangle base;
	double height;
public:
	Pyramid(double a = 1.0) : base(a), height(a) {};
	Pyramid(double a, double h) : base(a), height(h) {};
	Pyramid(Triangle t, double h = 1.0) : base(t), height(h) {};
	~Pyramid();

	void printAsciiImg()
	{
		cout << "Piramid" << endl;
	}
};


Pyramid::~Pyramid()
{
}
