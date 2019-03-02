#pragma once
#include "../../../../Abstract/abstract.h"
using namespace Abstract;
namespace Basis
{
	class Pyramid :
		public ConicalVolShape
	{
	public:
		/*Pyramid(Triangle t, double h = 1.0)
		{
			this->base = new Triangle(t);
			this->height = h;
		};*/

		Pyramid(Rect r, double h = 1.0)
		{
			this->base = new Rect(r);
			this->height = h;
		};

		double getArea() const
		{
			return 0.0;
		}
	};
}
