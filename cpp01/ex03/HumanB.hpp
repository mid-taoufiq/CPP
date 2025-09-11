#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *club;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &new_club);
	void	attack();
	~HumanB();
};

#endif