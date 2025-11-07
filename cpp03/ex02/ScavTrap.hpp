#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name);
	ScavTrap(ScavTrap &other);
	ScavTrap &operator=(ScavTrap &other);
	void attack(const std::string& target);
	void guardGate(void);
	~ScavTrap();
};


#endif