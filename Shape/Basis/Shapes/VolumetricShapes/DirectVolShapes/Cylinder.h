#pragma once
#include "../../../../Abstract/abstract.h"
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
	};
}
