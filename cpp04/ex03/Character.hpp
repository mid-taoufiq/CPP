#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter{
	protected:
		AMateria *materia[4];
		AMateria *trash[4];
		int		iter;
		std::string Name;
	public:
		Character();
		Character(std::string const &_type);
		Character(const Character &other);
		Character &operator=(const Character &other);
		virtual std::string const &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		virtual ~Character();
};

#endif