#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string first_type);
    const std::string &getType(void); //kayna flpdf
    void setType(std::string new_type);
    ~Weapon();
};

#endif