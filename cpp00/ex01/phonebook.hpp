#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    private:
        contact contacts[8];
        int iter;
        int count;
    public:
        Phonebook();
        int add_contacts(void);
        int search_contacts(void);
};

#endif