#include "FragTrap.hpp"

FragTrap::FragTrap(){
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "FragTrap default contructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other){
	name = other.name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap &other){
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
