#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->type = "Cat";
    this->cat_brain = new Brain();
    std::cout << this->type << " constructor called" << std::endl;
}

Cat::Cat(Cat &other) : Animal(){
    this->type = other.type;
    this->cat_brain = new Brain(*other.cat_brain);
    std::cout << this->type << " copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat &other){
    if (this != &other)
    {
        this->type = other.type;
        cat_brain = other.cat_brain;
    }
    std::cout << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

std::string Cat::getType() const { return type; }

void Cat::makeSound() const {
    std::cout << "Meow!!" << std::endl;
}

Cat::~Cat(){
    delete cat_brain;
    std::cout << this->type << "destructor called" << std::endl;
}