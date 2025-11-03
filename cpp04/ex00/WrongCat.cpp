#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    this->type = "WrongCat";
    std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &other) : WrongAnimal(){
    this->type = other.type;
    std::cout << this->type << " copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &other){
    if (this != &other)
        this->type = other.type;
    std::cout << this->type << " copy assignement operator called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const{
    std::cout << "Wrong Meow!!" << std::endl;
}

std::string WrongCat::getType() const { return type; }

WrongCat::~WrongCat(){
    std::cout << this->type << "destructor called" << std::endl;
}