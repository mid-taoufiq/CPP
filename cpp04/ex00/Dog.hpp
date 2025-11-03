#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
    public:
        Dog();
        Dog(Dog &other);
        Dog &operator=(Dog &other);
        ~Dog();
        std::string getType() const;
        void makeSound() const ;
};

#endif