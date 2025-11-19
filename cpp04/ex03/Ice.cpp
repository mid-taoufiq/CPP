#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    type = "ice";
    std::cout << type << " default constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    type = other.type;
    std::cout << type << " copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << type << " copy assignement operator called" << std::endl;
    return (*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice();
}

Ice::~Ice()
{
    std::cout << type << " destructor called" << std::endl;
}
