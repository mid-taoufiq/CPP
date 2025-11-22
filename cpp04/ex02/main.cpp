#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
int main()
{
    AAnimal *animal[6];
    for (int i = 0; i < 3; i++)
    {
        animal[i] = new Cat();
    }
    for (int i = 3; i < 6; i++)
    {
        animal[i] = new Dog();
    }
    for (int i = 0; i < 3; i++)
    {
        delete animal[i];
    }
    for (int i = 3; i < 6; i++)
    {
        delete animal[i];
    }
return 0;
}
