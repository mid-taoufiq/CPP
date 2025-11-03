#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->type = "Cat";
    std::cout << this->type << " constructor called" << std::endl;
}

Cat::Cat(Cat &other) : Animal(){
    this->type = other.type;
    std::cout << this->type << " copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat &other){
    if (this != &other)
        this->type = other.type;
    std::cout << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

std::string Cat::getType() const { return type; }

void Cat::makeSound() const {
    std::cout << "Meow!!" << std::endl;
}

Cat::~Cat(){
    std::cout << this->type << "destructor called" << std::endl;
}