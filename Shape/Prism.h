#pragma once
#include "abstract.h"
using namespace Abstract;
namespace Basis
{
	class Prism :
		public VolShape
	{
	public:
		Prism(Triangle t, double h = 1.0)
		{
			this->base = new Triangle(t);
			this->height = h;
		};
		Prism(Rect r, double h = 1.0)
		{
			this->base = new Rect(r);
			this->height = h;
		};
		~Prism() {};

		double getArea()
		{
			return 0.0;
		}

		void printOut()
		{
			cout << "Prism" << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBootomArea() << endl << endl;
		}
	};
}
