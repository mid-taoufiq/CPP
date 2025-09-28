#include "Fixed.hpp"

Fixed::Fixed()
{
	fp_number = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "copy constructor called" << std::endl;
	fp_number = other.fp_number;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		fp_number = other.fp_number;	
	}
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
