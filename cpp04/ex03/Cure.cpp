#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    type = "cure";
    std::cout << type << " default constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    type = other.type;
    std::cout << type << " copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << type << " copy assignement operator called" << std::endl;
    return (*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s  wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
    return new Cure();
}

Cure::~Cure()
{
    std::cout << type << " destructor called" << std::endl;
}
