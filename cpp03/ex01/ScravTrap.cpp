#include "ScravTrap.hpp"

ScravTrap::ScravTrap(std::string Name) : ClapTrap(Name){
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScravTrap " << Name << " created!" << std::endl;
}

ScravTrap::ScravTrap(ScravTrap &other) : ClapTrap(other){
	Name = other.Name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "ScravTrap copy constructor called" << std::endl;
}

ScravTrap& ScravTrap::operator=(ScravTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScravTrap Copy assignment operator called" << std::endl;
	return (*this);
}

void ScravTrap::attack(const std::string &target){
	if (!Hit_points && !Energy_points){
		return ;
	}
	Energy_points--;
	std::cout << "ScravTrap " << Name << " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScravTrap::guardGate(void){
	std::cout << "ScravTrap " << Name << " is now in Gate keeper mode." << std::endl;
}

ScravTrap::~ScravTrap(){
	std::cout << "ScravTrap " << Name << " destroyed!" << std::endl;
}
