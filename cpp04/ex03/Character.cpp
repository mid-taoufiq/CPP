#include "Character.hpp"

Character::Character()
{
    Name = "none";
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &_Name)
{
    Name = _Name;
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &other)
{
    Name = other.Name;
    for (int i; i < 4; i++)
    {
        if (other.materia[i]){
            materia[i] = other.materia[i]->clone();
        }
        else{
            materia[i] = NULL;
        }
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        Name = other.Name;
        for (int i; i < 4; i++)
        {
            if (other.materia[i]){
                materia[i] = other.materia[i]->clone();
            }
            else{
                materia[i] = NULL;
            }
        }
    }
    std::cout << "Character copy assignement operator called" << std::endl;
    return (*this);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!materia[i]){
            materia[i] = m;
            std::cout << "materia " << materia[i]->getType() << " equiped" << std::endl;
        }
    }
}

void Character::unequip(int idx)
{
    if ((idx <= 3 || idx >= 0) && materia[idx])
    {
        std::cout << "materia " << materia[idx]->getType() << " unequiped" << std::endl;
        delete materia[idx];
    }
}

void Character::use(int idx, Character& target)
{
    materia[idx]->use(target);
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}
