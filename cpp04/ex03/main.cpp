#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* Cloud = new Character("Cloud");

	AMateria* tmp;
	tmp = src->createMateria("Ice");
	Cloud->equip(tmp);
	tmp = src->createMateria("Cure");
	Cloud->equip(tmp);

	ICharacter* Sephiroth = new Character("Sephiroth");

	Cloud->use(0, *Sephiroth);
	Cloud->use(1, *Sephiroth);

	delete Sephiroth;
	delete Cloud;
	delete src;
	
	return 0;
}
