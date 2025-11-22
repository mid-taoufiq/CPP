#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal " << this->type << " constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal &other){
    this->type = other.type;
    std::cout << "AAnimal " << this->type << " copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal &other){
    if (this != &other)
        this->type = other.type;
    std::cout << "AAnimal " << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

std::string AAnimal::getType() const { return type; }

AAnimal::~AAnimal(){
    std::cout << "AAnimal " << this->type << "destructor called" << std::endl;
}