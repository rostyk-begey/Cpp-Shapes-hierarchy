#pragma once
namespace Abstract
{
	class Shape
	{
	public:
		virtual ~Shape() {};
		virtual double getArea() const = 0;
		virtual void printOut() const = 0;
	};
}

