#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(AAnimal &other);
        AAnimal &operator=(AAnimal &other);
        std::string getType() const ;
        virtual void makeSound() const = 0;
        virtual ~AAnimal();
};

#endif
