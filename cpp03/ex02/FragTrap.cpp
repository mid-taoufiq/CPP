#include "FragTrap.hpp"
FragTrap::FragTrap(const std::string &Name) : ScravTrap(Name)
{
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << Name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ScravTrap(Name)
{
	Name = other.Name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ScravTrap::operator=(other);
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " destroyed!" << std::endl;
}
