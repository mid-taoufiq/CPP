#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout << "default constructor called" <<  std::endl;
}

Point::Point(Fixed new_x, Fixed new_y) : x(new_x), y(new_y)
{
	std::cout << "default constructor called" <<  std::endl;
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
	std::cout << "copy constructor called" <<  std::endl;
}

Point &Point::operator=(const Point &other){
	std::cout << "copy assignement operator called" <<  std::endl;
	if (this != &other)
	{

	}
	(void)other;
	return (*this);
}

Point::~Point()
{
	std::cout << "destructor called" <<  std::endl;
}

float Point::get_x() const
{
	return (x.toFloat());
}

float Point::get_y() const 
{
	return (y.toFloat());
}
