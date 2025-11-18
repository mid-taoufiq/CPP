#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter{
	protected:
		AMateria *materia[4];
		std::string Name;
	public:
		Character();
		Character(std::string const &_type);
		Character(const Character &other);
		Character &operator=(const Character &other);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
		~Character();
};

#endif