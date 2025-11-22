#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
    public:
        Cat();
        Cat(Cat &other);
        Cat &operator=(Cat &other);
        virtual ~Cat();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif