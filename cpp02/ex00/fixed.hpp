#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class fixed
{
private:
	int fp_number;
	static const int store;
public:
	fixed();
	~fixed();
};

fixed::fixed()
{
	std::cout << "default constructor called" << std::endl;
}

fixed::fixed(const fixed &other)
{
	std::cout << "copy constructor called" << std::endl;
	fp_number = other.fp_number;
}

fixed &fixed::operator=(const fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		fp_number = other.fp_number;	
	}
	return (*this);
}

fixed::~fixed()
{
	std::cout << "destrutor called" << std::endl;
}



#endif