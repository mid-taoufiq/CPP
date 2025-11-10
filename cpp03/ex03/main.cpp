#include "DiamondTrap.hpp"

int main(){
	DiamondTrap diamond("diamond1");
	DiamondTrap diamond1(diamond);
	DiamondTrap diamond2;
	diamond2 = diamond1;
	diamond.whoAmI();
	diamond1.whoAmI();
	diamond2.whoAmI();
	diamond.attack("dimond1");
	diamond1.attack("diamond2");
	diamond2.attack("diamond");
}
