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
		~VolShape()
		{
			delete this->base;
		};

		virtual double getVol()
		{
			return this->getBootomArea() * this->height;
		};

		virtual double getBootomArea()
		{
			return this->base->getArea();
		};
	};
}
