#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &club) : name(new_name), weapon(club)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
