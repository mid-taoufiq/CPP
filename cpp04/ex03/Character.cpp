#include "Character.hpp"

Character::Character()
{
    Name = "none";
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    for (int i = 0; i < 4; i++)
        trash[i] = NULL;
    iter = 0;
    std::cout << "Character " << Name << " default constructor called" << std::endl;
}

Character::Character(std::string const &_Name)
{
    Name = _Name;
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    for (int i = 0; i < 4; i++)
        trash[i] = NULL;
    iter = 0;
    std::cout << "Character " << Name << " constructor called" << std::endl;
}

Character::Character(const Character &other)
{
    Name = other.Name;
    for (int i = 0; i < 4; i++)
        trash[i] = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (other.materia[i])
            materia[i] = other.materia[i]->clone();
        else
            materia[i] = NULL;
    }
    iter = 0;
    std::cout << "Character " << Name << " copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        Name = other.Name;
        for (int i = 0; i < 4; i++)
        {
            if (materia[i])
                delete materia[i];
        }
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
    std::cout << "Character " << Name << " copy assignement operator called" << std::endl;
    return (*this);
}

void Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cerr << "NULL passed as a parameter" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!materia[i]){
            materia[i] = m;
            std::cout << "materia " << materia[i]->getType() << " for character " << Name << " equiped" << std::endl;
            return ;
        }
    }
    delete m;
}

void Character::unequip(int idx)
{
    if ((idx <= 3 || idx >= 0) && materia[idx])
    {
        if (iter == 4)
        {
            for (int i = 0; i < 4; i++)
                delete trash[i];
            iter = 0;
        }
        trash[iter] = materia[idx];
        iter++;
        std::cout << "materia " << materia[idx]->getType() << " for character " << Name << " unequiped" << std::endl;
        materia[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 || idx <= 3)
    {
        if (materia[idx])
            materia[idx]->use(target);
    }
}

std::string const &Character::getName() const {return Name;}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (!trash[i])
            break;
        delete trash[i];
    }
    for (int i = 0; i < 4; i++)
        if (materia[i])
            delete materia[i];
    std::cout << "Character " << Name << " destructor called" << std::endl;
}
