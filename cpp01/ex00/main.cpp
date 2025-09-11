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
    new_zombie.set_name("foo");
    new_zombie.annouce();
}

int main()
{
    Zombie *new_zombie = newZombie("foo");
    new_zombie->annouce();
    delete new_zombie;
    return 0;
}
