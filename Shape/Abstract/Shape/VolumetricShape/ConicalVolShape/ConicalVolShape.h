#pragma once
namespace Abstract
{
	class ConicalVolShape :
		public VolShape
	{
	public:
		virtual double getVol() const
		{
			return (1/3) * this->getBottomArea() * this->height;
		}
	};
}
