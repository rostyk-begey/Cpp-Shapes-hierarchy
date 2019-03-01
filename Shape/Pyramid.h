#pragma once
#include "abstract.h"
using namespace Abstract;
namespace Basis
{
	class Pyramid :
		public VolShape
	{
	public:
		Pyramid(Triangle t, double h = 1.0)
		{
			this->base = new Triangle(t);
			this->height = h;
		};
		Pyramid(Rect r, double h = 1.0)
		{
			this->base = new Rect(r);
			this->height = h;
		};
		~Pyramid() {};

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
			cout << "Pyramid" << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBootomArea() << endl << endl;
		}
	};
}
