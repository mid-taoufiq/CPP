#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
    private:
        Brain *cat_brain;
    public:
        Cat();
        Cat(Cat &other);
        Cat &operator=(Cat &other);
        ~Cat();
        std::string getType() const;
        void makeSound() const;
};

#endif