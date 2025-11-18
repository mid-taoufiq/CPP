#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    type = "none";
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &_type) : AMateria(_type)
{
    type = _type;
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    type = other.type;
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "Ice copy assignement operator called" << std::endl;
    return (*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice(this->type);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}
