#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
public:
	ScravTrap(std::string Name);
	ScravTrap(ScravTrap &other);
	ScravTrap &operator=(ScravTrap &other);
	void attack(const std::string& target);
	void guardGate(void);
	~ScravTrap();
};


#endif