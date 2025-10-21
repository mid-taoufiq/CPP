#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &_name) : ClapTrap(_name){
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
	name = other.name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " requests a high five" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}
