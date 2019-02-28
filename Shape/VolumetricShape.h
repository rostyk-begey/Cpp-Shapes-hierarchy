#pragma once
namespace Abstract
{
	class VolumetricShape :
		public Shape
	{
	private:
		VolumetricShape();
		~VolumetricShape();
	public:
		virtual void printVol() = 0;
		virtual void printBootomArea() = 0;
	};
}
