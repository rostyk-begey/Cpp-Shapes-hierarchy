#pragma once
#include "abstract.h"
using namespace Abstract;
namespace Basis
{
	class Parallelepiped :
		public VolShape
	{
	public:
		Parallelepiped(Rect r, double h)
		{
			this->base = new Rect(r);
			this->height = h;
		};
		Parallelepiped(Square s, double h)
		{
			this->base = new Square(s);
			this->height = h;
		};
		~Parallelepiped() {};

		double getArea()
		{
			return 0.0;
		}

		void printOut()
		{
			cout << "Parallelepiped" << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBootomArea() << endl << endl;
		}
	};
}
