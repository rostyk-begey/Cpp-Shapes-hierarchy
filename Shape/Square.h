#pragma once
#include "abstract.h"
using namespace Abstract;
namespace Basis
{
	class Square :
		//public Pyramidable,
		//public Prismable
		public FlatShape
	{
	protected:
		double x;
		double y;
	public:
		Square(double a, double b) : x(a), y(b) {};
		Square(const Square & S)
		{
			this->x = S.x;
			this->y = S.y;
		};
		~Square() {};

		void printOut()
		{
			cout << "Square" << endl;
			cout << "Area: " << this->getArea() << endl << endl;
		}

		double getArea()
		{
			return 0.0;
		}
	};
}
