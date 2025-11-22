#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
public:
    private:
        Brain *cat_brain;
    public:
        Cat();
        Cat(Cat &other);
        Cat &operator=(Cat &other);
        virtual ~Cat();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif