#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
    this->dog_brain = new Brain;
    std::cout << this->type << " constructor called" << std::endl;
}

Dog::Dog(Dog &other) : Animal(){
    this->type = other.type;
    this->dog_brain = new Brain(*other.dog_brain);
    std::cout << this->type << " copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog &other){
    if (this != &other)
    {
        this->type = other.type;
        *dog_brain = *other.dog_brain;
    }
    std::cout << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

std::string Dog::getType() const { return type; }

void Dog::makeSound() const {
    std::cout << "How!!" << std::endl;
}

Dog::~Dog(){
    delete dog_brain;
    std::cout << this->type << "destructor called" << std::endl;
}
