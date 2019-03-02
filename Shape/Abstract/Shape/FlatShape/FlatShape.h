#pragma once
namespace Abstract
{
	class FlatShape :
		public Shape
	{
	public:
		virtual double getPerimeter() const = 0;

		void printOut() const
		{
			cout << "---------------------" << endl;
			cout << typeid(*this).name() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Perimeter: " << this->getPerimeter() << endl;
			cout << "---------------------" << endl << endl;
		}
	};
}
