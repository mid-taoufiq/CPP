#include "ScravTrap.hpp"

ScravTrap::ScravTrap(){
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScravTrap default contructor called" << std::endl;
}

ScravTrap::ScravTrap(std::string _name) : ClapTrap(_name){
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScravTrap " << name << " created!" << std::endl;
}

ScravTrap::ScravTrap(ScravTrap &other) : ClapTrap(other){
	std::cout << "ScravTrap " << name << " copy constructor called" << std::endl;
}

ScravTrap& ScravTrap::operator=(ScravTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScravTrap " << name << " copy assignment operator called" << std::endl;
	return (*this);
}


void ScravTrap::attack(const std::string& target){
	if (!Hit_points && !Energy_points){
		return ;
	}
	Energy_points--;
	std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScravTrap::guardGate(void){
	std::cout << "ScravTrap " << name << " is now in Gate keeper mode." << std::endl;
}

ScravTrap::~ScravTrap(){
	std::cout << "ScravTrap " << name << " destroyed!" << std::endl;
}
