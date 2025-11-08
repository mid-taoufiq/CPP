#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	unsigned int Energy_points;
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