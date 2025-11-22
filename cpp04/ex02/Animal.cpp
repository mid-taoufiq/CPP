#include "Animal.hpp"

Animal::Animal(){
    this->type = "Animal";
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}

Animal::Animal(Animal &other){
    this->type = other.type;
    std::cout << "Animal " << this->type << " copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal &other){
    if (this != &other)
        this->type = other.type;
    std::cout << "Animal " << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

std::string Animal::getType() const { return type; }

void Animal::makeSound() const {
    std::cout << "Animal sound!!" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal " << this->type << "destructor called" << std::endl;
}