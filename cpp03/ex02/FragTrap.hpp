#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScravTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string _name);
	FragTrap(FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	void highFivesGuys(void);
	~FragTrap();
};

#endif