#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : virtual public ClapTrap
{
protected:
	unsigned int Energy_points;
public:
	ScravTrap();
	ScravTrap(std::string _name);
	ScravTrap(ScravTrap &other);
	ScravTrap &operator=(ScravTrap &other);
	void attack(const std::string& target);
	void guardGate(void);
	~ScravTrap();
};


#endif