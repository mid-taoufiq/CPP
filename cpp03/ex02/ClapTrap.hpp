#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP 

#include <iostream>

class ClapTrap
{
protected:
	std::string Name;
	int Hit_points;
	int Energy_points;
	int Attack_damage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};


#endif