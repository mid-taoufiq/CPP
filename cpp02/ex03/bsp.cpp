#include "Point.hpp"

float calculate_space(Point const point1, Point const point2, Point const point3)
{
	float triangle_space;
	float space1;
	float space2;
	space1 = (point1.get_x() * point2.get_y()) + (point2.get_x() * point3.get_y()) + (point3.get_x() * point1.get_y());
	space2 = (point1.get_y() * point2.get_x()) + (point2.get_y() * point3.get_x()) + (point3.get_y(), point1.get_x());
	triangle_space = space1 - space2;
	if (triangle_space < 0)
	{
		triangle_space *= -1;
	}
	triangle_space /= 2;
	return (triangle_space);
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float default_triangle;
	float triangle_1;
	float triangle_2;
	float triangle_3;

	default_triangle = calculate_space(a, b, c);
	triangle_1 = calculate_space(a, point, b);
	triangle_2 = calculate_space(b, point, c);
	triangle_3 = calculate_space(a, point, c);
	if ((triangle_1 + triangle_2 + triangle_3) != default_triangle)
	{
		return (false);
	}
	return (true);
}
