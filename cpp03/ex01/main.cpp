#include "ScavTrap.hpp"

int main(){
	ScavTrap scav1("scav1");
    ScavTrap scav2(scav1);
    ScavTrap scav3;
    scav3 = scav2;
	scav1.attack("scav2");
	scav2.attack("scav3");
	scav3.attack("scav1");
    scav1.guardGate();
    scav2.guardGate();
    scav3.guardGate();
}