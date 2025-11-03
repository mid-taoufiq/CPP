#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal &other);
        WrongAnimal &operator=(WrongAnimal &other);
        ~WrongAnimal();
        std::string getType() const ;
        void makeSound() const ;
};

#endif
