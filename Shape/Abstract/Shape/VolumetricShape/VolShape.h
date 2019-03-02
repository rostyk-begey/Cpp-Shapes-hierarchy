#pragma once
namespace Abstract
{
	class VolShape :
		public Shape
	{
	protected:
		double height;
		FlatShape *base;
	public:
		/*VolShape(FlatShape *base, double h)
		{
			this->height = h;
			this->base = base;
		};*/
		
		virtual ~VolShape()
		{
			delete this->base;
		};

		virtual double getVol() const = 0;

		virtual double getBottomArea() const
		{
			return this->base->getArea();
		};

		virtual double getBottomPerimeter() const
		{
			return this->base->getPerimeter();
		};

		void printOut() const
		{
			cout << "---------------------" << endl;
			cout << typeid(*this).name() << endl;
			cout << "Vol: " << this->getVol() << endl;
			cout << "Area: " << this->getArea() << endl;
			cout << "Bottom area: " << this->getBottomArea() << endl;
			cout << "---------------------" << endl << endl;
		}
	};
}
