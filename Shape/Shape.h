#pragma once
namespace Abstract
{
	class Shape
	{
	private:
		Shape();
		~Shape();
	public:
		virtual void printArea() = 0;
		virtual void printAsciiImg() = 0;
	};
}

