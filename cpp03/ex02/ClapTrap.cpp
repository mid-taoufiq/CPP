#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	name = "none";
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "ClapTrap default contructor called" << std::endl;
}

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
	std::cout << "ClapTrap " << name << " copy constructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	if (this != &other)
	{
		name = other.name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		Attack_damage = other.Attack_damage;
	}
	std::cout << "ClapTrap " << name << " copy assignment operator called!" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (!Hit_points){
		std::cout << "ClapTrap " << name << " has no hit points!" << std::endl;
		return ;
	}
	if (!Energy_points){
		std::cout << "ClapTrap " << name << " has no energy points!" << std::endl;
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
	std::cout << "ClapTrap " << name << " took " << amount << " of damage points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (!Hit_points){
		std::cout << "ClapTrap " << name << " has no hit points!" << std::endl;
		return ;
	}
	if (!Energy_points){
		std::cout << "ClapTrap " << name << " has no energy points!" << std::endl;
		return ;
	}
	Energy_points--;
	Hit_points += amount;
	std::cout << "ClapTrap " << name << " regains " << amount << " Hit points!" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}
