#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:    
    private:
        Brain *dog_brain;
    public:
        Dog();
        Dog(Dog &other);
        Dog &operator=(Dog &other);
        ~Dog();
        std::string getType() const;
        void makeSound() const ;
};

#endif