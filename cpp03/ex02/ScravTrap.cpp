#include "ScravTrap.hpp"
ScravTrap::ScravTrap(const std::string &Name) : ClapTrap(Name)
{
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScravTrap " << Name << " created!" << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap &other) : ClapTrap(Name)
{
	Name = other.Name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "copy constructor called" << std::endl;
}

ScravTrap& ScravTrap::operator=(const ScravTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}


void ScravTrap::attack(const std::string& target)
{
	if (!Hit_points && !Energy_points){
		return ;
	}
	Energy_points--;
	std::cout << "ClapTrap " << Name << " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScravTrap::guardGate(void)
{
	std::cout << "ScravTrap " << Name << " is now in Gate keeper mode." << std::endl;
}

ScravTrap::~ScravTrap()
{
	std::cout << "ScravTrap " << Name << " destroyed!" << std::endl;
}
