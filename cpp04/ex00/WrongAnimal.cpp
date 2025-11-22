#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal " << this->type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other){
    this->type = other.type;
    std::cout << "WrongAnimal" << this->type << " copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &other){
    if (this != &other)
        this->type = other.type;
    std::cout << "WrongAnimal " << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound!!" << std::endl;
}

std::string WrongAnimal::getType() const { return type; }

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal " << this->type << " destructor called" << std::endl;
}
