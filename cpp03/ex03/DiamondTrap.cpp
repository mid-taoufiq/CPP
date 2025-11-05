#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScravTrap(), FragTrap(){
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
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), ScravTrap(other), FragTrap(other){
	name = other.name;
	Hit_points = other.Hit_points;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other){
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name = other.name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		Attack_damage = other.Attack_damage;
	}
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