#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "none";
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &_type)
{
    type = _type;
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    type = other.type;
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "AMateria copy assignement operator called" << std::endl;
    return (*this);
}

std::string const &AMateria::getType() const{return type;}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}
