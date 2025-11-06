#include "FragTrap.hpp"

FragTrap::FragTrap(){
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap default contructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other){
	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap " << name << " copy assignment operator called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " requests a high five" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}
