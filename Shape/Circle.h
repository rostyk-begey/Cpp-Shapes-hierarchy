#pragma once
#include "abstract.h";
using namespace Abstract;
namespace Basis
{
	class Circle :
		//public Conical
		public FlatShape
	{
	private:
		double radius;
	public:
		Circle(double r = 1.0) : radius(r) {};
		Circle(const Circle & C) 
		{
			this->radius = C.radius;
		};
		~Circle() {};

		void printOut()
		{
			cout << "Circle" << endl;
			cout << "Area: " << this->getArea() << endl << endl;
		}

		double getArea()
		{
			return 0.0;
		}
	};
}

