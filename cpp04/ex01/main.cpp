#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
    Animal *animal[4];
    animal[0] = new Cat();
    animal[1] = new Cat();
    animal[2] = new Dog();
    animal[3] = new Dog();
    for (int i = 0; i < 4; i++)
        delete animal[i];
return 0;
}
