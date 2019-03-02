#pragma once
#include "../../../../Abstract/abstract.h"
using namespace Abstract;
namespace Basis
{
	class Prism :
		public DirectVolShape
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
	};
}
