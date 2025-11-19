#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			materia[i] = other.materia[i]->clone();
		else
			materia[i] = NULL;
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
				delete materia[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.materia[i])
				materia[i] = other.materia[i]->clone();
			else
				materia[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materia[i]){
			materia[i] = m;
			// std::cout << "type:type:type:type:type:type:type:type:type:type:type:type:type:type: " <<materia[i]->getType() << std::endl;
			break;
		}
		if (i == 3){
			delete m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && (materia[i]->getType() == type))
			return materia[i];
	}
	std::cerr << "no materia of type " << type << " exist" << std::endl;
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete materia[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}