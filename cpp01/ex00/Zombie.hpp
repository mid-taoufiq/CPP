#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
		std::string name;
    public:
		void annouce( void );
		void set_name(std::string new_name);
    	Zombie(void);
   		~Zombie();
};


#endif