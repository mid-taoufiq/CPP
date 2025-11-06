#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	name = "none";
	Hit_points = FragTrap::Hit_points;
	Energy_points = ScravTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap default contructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_ClapTrap_name"), ScravTrap(_name), FragTrap(_name){
	name = _name;
	Hit_points = FragTrap::Hit_points;
	Energy_points = ScravTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "ClapTrap hp " << ClapTrap::Hit_points << std::endl;
	std::cout << "ClapTrap ep " << ClapTrap::Energy_points << std::endl;
	std::cout << "ClapTrap ad " << ClapTrap::Attack_damage << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "ScravTrap hp " << ScravTrap::Hit_points << std::endl;
	std::cout << "ScravTrap ep " << ScravTrap::Energy_points << std::endl;
	std::cout << "ScravTrap ad " << ScravTrap::Attack_damage << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "FragTrap hp " << FragTrap::Hit_points << std::endl;
	std::cout << "FragTrap ep " << FragTrap::Energy_points << std::endl;
	std::cout << "FragTrap ad " << FragTrap::Attack_damage << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "DiamondTrap hp " << Hit_points << std::endl;
	std::cout << "DiamondTrap ep " << Energy_points << std::endl;
	std::cout << "DiamondTrap ad " << Attack_damage << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), ScravTrap(other), FragTrap(other){
	name = other.name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "DiamondTrap " << name << " copy constructor called!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name = other.name;
	}
	std::cout << "DiamondTrap " << name << " assignement operator called!" << std::endl;
	return (*this);
}

void DiamondTrap::attack(const std::string& target){
	ScravTrap::attack(target);
}

void DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap name is " << name << ", ClapTrap name is" << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}
