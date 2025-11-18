#include "AAnimal.hpp"

AAnimal::AAnimal(){
    this->type = "AAnimal";
    std::cout << this->type << " constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal &other){
    this->type = other.type;
    std::cout << this->type << " copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal &other){
    if (this != &other)
        this->type = other.type;
    std::cout << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

std::string AAnimal::getType() const { return type; }

AAnimal::~AAnimal(){
    std::cout << this->type << "destructor called" << std::endl;
}