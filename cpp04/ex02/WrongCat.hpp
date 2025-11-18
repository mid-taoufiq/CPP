#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    public:
        WrongCat();
        WrongCat(WrongCat &other);
        WrongCat &operator=(WrongCat &other);
        ~WrongCat();
        std::string getType() const;
        void makeSound() const ;
};

#endif