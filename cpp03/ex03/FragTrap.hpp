#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(const std::string &_name);
	FragTrap(const FragTrap &other);
	void highFivesGuys(void);
	~FragTrap();
};

#endif