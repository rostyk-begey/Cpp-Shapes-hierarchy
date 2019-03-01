#pragma once
#include "abstract.h"
using namespace Abstract;
namespace Basis
{
	class Triangle :
		//public Pyramidable,
		//public Prismable
		public FlatShape
	{
	protected:
		double side;
	public:
		Triangle(double a = 1.0) : side(a) {};
		Triangle(const Triangle & T) 
		{
			this->side = T.side;
		}
		~Triangle() {};

		void printOut()
		{
			cout << "Triangle" << endl;
			cout << "Area: " << this->getArea() << endl << endl;
		}

		double getArea()
		{
			return 0.0;
		}
	};
}
