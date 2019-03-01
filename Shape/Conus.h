#pragma once
#include "abstract.h"
using namespace Abstract;
namespace Basis
{
	class Conus :
		public VolShape
	{
	public:
		Conus(Circle t, double h = 1.0)
		{
			this->base = new Circle(t);
			this->height = h;
		};
		~Conus() {};

		double getArea()
		{
			return 0.0;
		}

		double getVol()
		{
			return 9999;
		}

		void printOut()
		{
			cout << "Conus" << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBootomArea() << endl << endl;
		}
	};
}
