#include "ScravTrap.hpp"
ScravTrap::ScravTrap(const std::string &_name) : ClapTrap(_name){
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScravTrap " << name << " created!" << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap &other) : ClapTrap(other){
	name = other.name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "copy constructor called" << std::endl;
}

ScravTrap& ScravTrap::operator=(const ScravTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "Copy assignment operator called" << std::endl;
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
