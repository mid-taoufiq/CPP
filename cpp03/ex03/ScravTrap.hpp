#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : virtual public ClapTrap
{
public:
	ScravTrap(const std::string &name);
	ScravTrap(const ScravTrap &other);
	ScravTrap &operator=(const ScravTrap &other);
	void attack(const std::string& target);
	void guardGate(void);
	~ScravTrap();
};


#endif