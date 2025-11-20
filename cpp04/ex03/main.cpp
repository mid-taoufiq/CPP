#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	// IMateriaSource* src = new MateriaSource();
	// IMateriaSource* src2 = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// src2 = src;
	// std::cout << src2->createMateria("ice")->getType() << std::endl;
	
	// delete src2;
	// delete src;
	ICharacter *a = new Character("cloud");
	ICharacter *b = new Character("seph");

	a = b;

	std::cout << a->getName() << std::endl;
	std::cout << b->getName() << std::endl;

	delete a;
	delete b;
	return 0;
}
