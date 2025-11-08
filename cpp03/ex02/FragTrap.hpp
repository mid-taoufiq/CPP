#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(FragTrap &other);
	FragTrap &operator=(FragTrap &other);
	void highFivesGuys(void);
	~FragTrap();
};

#endif