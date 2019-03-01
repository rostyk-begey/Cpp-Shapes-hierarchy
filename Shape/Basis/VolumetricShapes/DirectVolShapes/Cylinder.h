#pragma once
#include "../../../Abstract/abstract.h"
using namespace Abstract;
namespace Basis
{
	class Cylinder :
		public DirectVolShape
	{
	public:
		Cylinder(Circle c, double h = 1.0)
		{
			this->base = new Circle(c);
			this->height = h;
		};

		void printOut() const
		{
			cout << "Cylinder" << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBottomArea() << endl << endl;
		}
	};
}
