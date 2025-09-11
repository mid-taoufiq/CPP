#include "HumanB.hpp"

HumanB::~HumanB()
{

}

HumanB::HumanB(std::string new_name)
{
	name = new_name;
	club = NULL;
}

void	HumanB::setWeapon(Weapon &new_club)
{
	club = &new_club;
}

void	HumanB::attack()
{
	if (club)
	{
		std::cout << name << " attacks with their " << club->getType() << std::endl;
	}
}
