#include "ScravTrap.hpp"

int main(){
	ScravTrap scrav1("scrav1");
    ScravTrap scrav2(scrav1);
    scrav1.guardGate();
    scrav2.guardGate();
}