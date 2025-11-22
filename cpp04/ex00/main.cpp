#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* z = new WrongCat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << z->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();
z->makeSound();

delete meta;
delete j;
delete i;
delete z;

return 0;
}
