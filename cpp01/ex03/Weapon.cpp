#include "Weapon.hpp"

Weapon::Weapon(std::string first_type)
{
	type = first_type;
}
Weapon::~Weapon()
{

}
std::string Weapon::getType(void)
{
	return(type);
}
void Weapon::setType(std::string new_type)
{
	type = new_type;
}
