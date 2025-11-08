#include "ScavTrap.hpp"

int main(){
	ScavTrap scrav1("scrav1");
    ScavTrap scrav2(scrav1);
	scrav1.attack("scav2");
    scrav1.guardGate();
    scrav2.guardGate();
}