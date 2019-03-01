#pragma once
namespace Abstract
{
	class Shape
	{
	public:
		virtual ~Shape() {};
		virtual double getArea() = 0;
		virtual void printOut() = 0;
	};
}

