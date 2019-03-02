#pragma once
#include "../../../Abstract/abstract.h";
using namespace Abstract;
namespace Basis
{
	class Circle :
		public FlatShape
	{
	private:
		double radius;
	public:
		Circle(double r = 1.0) : radius(r) {};
		Circle(const Circle & C) 
		{
			this->radius = C.radius;
		};

		double getArea() const
		{
			return 3.14 * pow(this->radius, 2);
		}

		double getPerimeter() const
		{
			return 2 * 3.14 * this->radius;
		}
	};
}

