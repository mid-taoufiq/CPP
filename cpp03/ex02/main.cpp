#include "FragTrap.hpp"

int main(){
	FragTrap frag1("frag1");
    FragTrap frag2(frag1);
    FragTrap frag3;
    frag3 = frag2;
    frag1.highFivesGuys();
    frag2.highFivesGuys();
    frag3.highFivesGuys();
}