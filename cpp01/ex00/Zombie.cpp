#include "Zombie.hpp"

void Zombie::annouce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string new_name){name = new_name;}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << name << std::endl;
}