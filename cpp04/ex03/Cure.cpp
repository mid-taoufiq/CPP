#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    type = "none";
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &_type) : AMateria(_type)
{
    type = _type;
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    type = other.type;
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Cure copy assignement operator called" << std::endl;
    return (*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.name << "'s  wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
    return new Cure();
}


Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}
