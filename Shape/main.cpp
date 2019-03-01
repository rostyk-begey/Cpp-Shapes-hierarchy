#include <iostream>
using namespace std;

#include "./Abstract/abstract.h";

#include "./Basis/basis.h";

using namespace Abstract;

using namespace Basis;

int main()
{
	Circle circle(5.0);
	Rect rect(2.0, 3.0);
	Triangle triangle(2.5);

	Conus counus(circle, 2.0);
	Cylinder cylinder(circle, 2.82);
	Parallelepiped par(rect, 3.4);
	Prism prism(triangle, 4.2);
	Pyramid pir1(rect, 8.1);
	Pyramid pir2(triangle, 5.3);

	Shape *arr[9] = {
		new Circle(5.0),
		new Rect(2.0, 3.0),
		new Triangle(2.5),
		new Conus(circle, 2.0),
		new Cylinder(circle, 2.82),
		new Parallelepiped(rect, 3.4),
		new Prism(triangle, 4.2),
		new Pyramid(rect, 8.1),
		new Pyramid(triangle, 5.3)
	};

	for (Shape *shape : arr)
	{
		shape->printOut();
	}

	cin.get();
	return 0;
}