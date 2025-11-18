#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
int main()
{
    AAnimal *animal[2];
    animal[0] = new Cat();
    animal[1] = new Dog();

    animal[0]->makeSound();
    animal[1]->makeSound();

    delete animal[0];
    delete animal[1];
return 0;
}
