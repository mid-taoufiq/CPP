#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(3, "fool");
    for (int i = 0; i < 3; i++)
    {
        zombies[i].annouce();
    }
    delete[] zombies;
    return 0;
}
