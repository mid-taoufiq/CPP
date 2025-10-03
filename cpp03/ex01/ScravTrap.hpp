#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
public:
	ScravTrap(const std::string &Name);
	void attack(const std::string& target);
	void guardGate(void);
	~ScravTrap();
};


#endif