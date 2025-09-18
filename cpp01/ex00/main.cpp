//Files to turn in: Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp
//Makefile smito Makefile machi makefile

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* new_zombie = new Zombie;
    new_zombie->set_name(name);
    return (new_zombie);
}

void randomChump(std::string name)
{
    Zombie new_zombie;
    new_zombie.set_name(name);
    new_zombie.annouce();
}

int main()
{
    Zombie *new_zombie = newZombie("foo");
    new_zombie->annouce();
    randomChump("random");
    delete new_zombie;
    return 0;
}
