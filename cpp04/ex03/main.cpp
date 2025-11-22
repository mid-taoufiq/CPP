#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource* shinra = new MateriaSource();

	shinra->learnMateria(new Ice());
	shinra->learnMateria(new Cure());

	ICharacter* cloud = new Character("cloud");
	AMateria* materia;

	materia = shinra->createMateria("ice");
	cloud->equip(materia);
	materia = shinra->createMateria("cure");
	cloud->equip(materia);

	ICharacter* sephiroth = new Character("sephiroth");

	cloud->use(0, *sephiroth);
	cloud->use(1, *sephiroth);

	delete sephiroth;
	delete cloud;
	delete shinra;

	std::cout << "-------------------------------------------------------------------" << std::endl;

	ICharacter *zack = new Character("zack");
	AMateria *materia1 = new Ice();
	AMateria *materia2 = new Ice();

	zack->equip(materia1);
	zack->unequip(0);
	zack->equip(materia1);
	zack->unequip(0);
	zack->equip(materia2);
	zack->unequip(2);

	delete zack;

	return 0;
}
