#include "Zombie.hpp"

int main()
{
    Zombie *new_zombie = newZombie("foo");
    new_zombie->annouce();
    randomChump("random");
    delete new_zombie;
    return 0;
}
