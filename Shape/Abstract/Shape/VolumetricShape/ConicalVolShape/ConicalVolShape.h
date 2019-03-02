#pragma once
namespace Abstract
{
	class ConicalVolShape :
		public VolShape
	{
	public:
		//ConicalVolShape(FlatShape *base, double h) : VolShape(base, h) {};

		virtual double getVol() const
		{
			return (1/3) * this->getBottomArea() * this->height;
		}
	};
}
