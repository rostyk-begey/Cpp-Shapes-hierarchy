#pragma once
namespace Abstract
{
	class FlatShape :
		public Shape
	{
	public:
		virtual double getPerimeter() const = 0;
	};
}
