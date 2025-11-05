#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScravTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScravTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(DiamondTrap &other);
		DiamondTrap &operator=(DiamondTrap &other);
		void attack(const std::string& target);
		void whoAmI(void);
		~DiamondTrap();
};

#endif