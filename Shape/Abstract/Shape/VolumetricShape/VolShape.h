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
		virtual ~VolShape()
		{
			delete this->base;
		};

		virtual double getBottomArea() const
		{
			return this->base->getArea();
		};

		virtual double getBottomPerimeter() const
		{
			return this->base->getPerimeter();
		};
	};
}
