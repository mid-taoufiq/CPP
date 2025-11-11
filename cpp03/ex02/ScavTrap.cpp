#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap default contructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name){
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other){
	std::cout << "ScavTrap " << name << " copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap " << name << " copy assignment operator called!" << std::endl;
	return (*this);
}


void ScavTrap::attack(const std::string& target){
	if (!Hit_points){
		std::cout << "ScavTrap " << name << "has no hit points!" << std::endl;
		return ;
	}
	if (!Energy_points){
		std::cout << "ScavTrap " << name << "has no energy points!" << std::endl;
		return ;
	}
	Energy_points--;
	std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}
