#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("clap1");
	ClapTrap clap2("clap2");

	clap1.attack("Clap2");
	clap2.takeDamage(5);
	clap2.attack("Clap1");
	clap1.takeDamage(5);
	clap1.beRepaired(5);
	clap2.beRepaired(5);
	return 0;
}
