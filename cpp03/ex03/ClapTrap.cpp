#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name){
	name = _name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	name = other.name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	if (this != &other)
	{
		name = other.name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		Attack_damage = other.Attack_damage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (!Hit_points && !Energy_points){
		return ;
	}
	Energy_points--;
	std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (amount > Hit_points)
	{
		Hit_points = 0;
	}
	else
	{
		Hit_points -= amount;
	}
	std::cout << "ClapTrap " << name << " takes " << amount << " of damage points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (!Hit_points || !Energy_points){
		return ;
	}
	Energy_points--;
	Hit_points += amount;
	std::cout << "ClapTrap " << name << " regains " << amount << " Hit points!" << std::endl;}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}
