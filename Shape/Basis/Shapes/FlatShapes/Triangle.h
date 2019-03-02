#pragma once
#include "../../../Abstract/abstract.h"
using namespace Abstract;
namespace Basis
{
	class Triangle :
		public FlatShape
	{
	protected:
		double a;
		double b;
		double c;
	public:
		Triangle(double x = 1.0) : a(x), b(x), c(x) {};
		//Triangle(double a = 1.0, double b = 1.0, double c = 1.0) : a(a), b(b), c(c) {};
		Triangle(const Triangle & T) 
		{
			this->a = T.a;
			this->b = T.b;
			this->c = T.c;
		}

		double getArea() const
		{
			double p = (a + b + c) / 2;
			return sqrt(p * (p - a) * (p - b) * (p - c) );
		}
		
		double getPerimeter() const
		{
			return this->a + this->b + this->c;
		}
	};
}
