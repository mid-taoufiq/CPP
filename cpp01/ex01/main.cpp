#include "Zombie.hpp"

int main()
{
    int N = 3;
    Zombie *zombies = zombieHorde(N, "fool");
    if (!zombies)
        return (1);
    for (int i = 0; i < N; i++)
    {
        zombies[i].annouce();
    }
    delete[] zombies;
    return 0;
}
