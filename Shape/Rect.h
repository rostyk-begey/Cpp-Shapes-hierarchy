#pragma once
#include "abstract.h";
using namespace Abstract;
namespace Basis
{
	class Rect :
		//public Pyramidable,
		//public Prismable
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
		~Rect() {};

		void printOut()
		{
			cout << "Rect" << endl;
			cout << "Area: " << this->getArea() << endl << endl;
		}

		double getArea()
		{
			return 0.0;
		}
	};
}
