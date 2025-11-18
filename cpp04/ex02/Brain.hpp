#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
    std::string ideas[100];
    Brain();
    Brain(Brain &other);
    Brain &operator=(Brain &other);
    ~Brain();
};


#endif