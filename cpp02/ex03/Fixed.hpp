#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fp_number;
	static const int fractional_bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float fnumber);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;
	bool operator<(const Fixed &second);
	bool operator>(const Fixed &second);
	bool operator<=(const Fixed &second);
	bool operator>=(const Fixed &second);
	bool operator==(const Fixed &second);
	bool operator!=(const Fixed &second);
	Fixed operator+(const Fixed &second);
	Fixed operator-(const Fixed &second);
	Fixed operator*(const Fixed &second);
	Fixed operator/(const Fixed &second);
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(const Fixed &first, const Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);



#endif