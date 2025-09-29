#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

	Point a(1, 5);
	Point b(1, 1);
	Point c(5, 1);
	Point p(2 , 3);
	if (bsp(a, b, c, p))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}

}
