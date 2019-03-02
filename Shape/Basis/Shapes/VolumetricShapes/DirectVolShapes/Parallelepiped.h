#pragma once
#include "../../../../Abstract/abstract.h"
using namespace Abstract;
namespace Basis
{
	class Parallelepiped :
		public DirectVolShape
	{
	public:
		Parallelepiped(Rect r, double h)
		{
			this->base = new Rect(r);
			this->height = h;
		};
	};
}
