#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int iter;
        int count;
    public:
        Phonebook();
        int add_contacts(void);
        int search_contacts(void);
};

#endif