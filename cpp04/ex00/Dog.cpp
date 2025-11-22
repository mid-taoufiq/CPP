#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
    std::cout << this->type << " constructor called" << std::endl;
}

Dog::Dog(Dog &other) : Animal(other){
    std::cout << this->type << " copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog &other){
    if (this != &other)
        Animal::operator=(other);
    std::cout << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

std::string Dog::getType() const { return type; }

void Dog::makeSound() const {
    std::cout  << "How!!" << std::endl;
}

Dog::~Dog(){
    std::cout << this->type << " destructor called" << std::endl;
}
