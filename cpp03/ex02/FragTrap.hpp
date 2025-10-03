#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScravTrap.hpp"

class FragTrap : public ScravTrap
{
public:
	FragTrap(const std::string &Name);
	FragTrap(const FragTrap &other);
	~FragTrap();
};

#endif