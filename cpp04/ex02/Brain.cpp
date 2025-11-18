#include "Brain.hpp"

Brain::Brain(){
    std::cout << "brain constructor called" << std::endl;
}

Brain::Brain(Brain &other){
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain &other){
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    std::cout << "brain copy asignement operator called" << std::endl;
    return *this;
}

Brain::~Brain(){
    std::cout << "brain destructor called" << std::endl;
}