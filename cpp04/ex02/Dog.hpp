#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
public:    
    private:
        Brain *dog_brain;
    public:
        Dog();
        Dog(Dog &other);
        Dog &operator=(Dog &other);
        virtual ~Dog();
        std::string getType() const;
        virtual void makeSound() const ;
};

#endif