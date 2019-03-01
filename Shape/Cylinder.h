#pragma once
#include "abstract.h"
using namespace Abstract;
namespace Basis
{
	class Cylinder :
		public VolShape
	{
	public:
		Cylinder(Circle c, double h = 1.0)
		{
			this->base = new Circle(c);
			this->height = h;
		};
		~Cylinder() {};

		double getArea()
		{
			return 0.0;
		}

		void printOut()
		{
			cout << "Cylinder" << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBootomArea() << endl << endl;
		}
	};
}
