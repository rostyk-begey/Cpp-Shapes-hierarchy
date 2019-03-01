#pragma once
namespace Abstract
{
	class DirectVolShape :
		public VolShape
	{
	public:
		virtual double getVol() const
		{
			return this->getBottomArea() * this->height;
		}

		virtual double getArea() const
		{
			double bottomArea = this->getBottomArea();
			double sideArea = this->getBottomPerimeter();
			return 2 * bottomArea + sideArea;
		}
	};
}
