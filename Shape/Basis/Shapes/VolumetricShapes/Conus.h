#pragma once
#include "../../../Abstract/abstract.h"
using namespace Abstract;
namespace Basis
{
	class Conus :
		public ConicalVolShape
	{
	public:
		Conus(Circle t, double h = 1.0)
		{
			this->base = new Circle(t);
			this->height = h;
		};

		double getArea() const
		{
			return 0.0;
		}

		void printOut() const
		{
			cout << "Conus" << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBottomArea() << endl << endl;
		}
	};
}
