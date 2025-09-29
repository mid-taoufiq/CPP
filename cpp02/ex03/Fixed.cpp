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
    std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (fp_number);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    fp_number = raw;
}

Fixed::Fixed(const int Inum)
{
    std::cout << "int constructor called" << std::endl;
    fp_number = Inum << fractional_bits;
}

Fixed::Fixed(const float fnum)
{
    std::cout << "Float constructor called" << std::endl;
    fp_number = roundf(fnum * (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
    return (fp_number >> fractional_bits);
}

float Fixed::toFloat(void) const
{
    return ((float)fp_number / (1 << fractional_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
    out << other.toFloat();
    return (out);
}

bool    Fixed::operator<(const Fixed &second)
{
    return (this->fp_number < second.fp_number);
}

bool    Fixed::operator>(const Fixed &second)
{
    return (this->fp_number > second.fp_number);
}

bool    Fixed::operator<=(const Fixed &second)
{
    return (this->fp_number <= second.fp_number);
}

bool    Fixed::operator>=(const Fixed &second)
{
    return (this->fp_number >= second.fp_number);
}

bool    Fixed::operator==(const Fixed &second)
{
    return (this->fp_number == second.fp_number);
}

bool    Fixed::operator!=(const Fixed &second)
{
    return (this->fp_number != second.fp_number);
}

Fixed    Fixed::operator+(const Fixed &second)
{
    Fixed tmp;

    tmp.fp_number = this->fp_number + second.fp_number;
    return (tmp);
}

Fixed    Fixed::operator-(const Fixed &second)
{
    Fixed tmp;

    tmp.fp_number = this->fp_number - second.fp_number;
    return (tmp);
}

Fixed    Fixed::operator*(const Fixed &second)
{
    Fixed tmp;
    float temp;

    temp = this->toFloat() * second.toFloat();
    tmp.fp_number = roundf(temp * (1 << fractional_bits));
    return (tmp);
}

Fixed    Fixed::operator/(const Fixed &second)
{
    Fixed tmp;
    float temp;

    temp = this->toFloat() / second.toFloat();
    tmp.fp_number = roundf(temp * (1 << fractional_bits));
    return (tmp);
}

Fixed   Fixed::operator++()
{
    ++this->fp_number;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed   Fixed::operator--()
{
    --this->fp_number;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    if (first.fp_number < second.fp_number)
        return (first);
    return (second);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
    if (first.fp_number < second.fp_number)
        return (first);
    return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    if (first.fp_number > second.fp_number)
        return (first);
    return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
    if (first.fp_number > second.fp_number)
        return (first);
    return (second);
}