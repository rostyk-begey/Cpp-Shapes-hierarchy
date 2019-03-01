#pragma once
#include "../../Abstract/abstract.h";
using namespace Abstract;
namespace Basis
{
	class Rect :
		public FlatShape
	{
	protected:
		double x;
		double y;
	public:
		Rect(double a, double b) : x(a), y(b) {};
		Rect(const Rect & R)
		{
			this->x = R.x;
			this->y = R.y;
		};

		double getArea() const
		{
			return this->x * this->y;
		}

		double getPerimeter() const
		{
			return 2 * (this->x + this->y);
		}

		void printOut() const
		{
			cout << "Rect" << endl;
			cout << "Area: " << this->getArea() << endl << endl;
		}
	};
}
