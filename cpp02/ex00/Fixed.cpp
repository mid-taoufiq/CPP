#include "Fixed.hpp"

Fixed::Fixed()
{
	fp_number = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	fp_number = other.fp_number;
	std::cout << "copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		fp_number = other.fp_number;	
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destrutor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fp_number);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	fp_number = raw;
}
