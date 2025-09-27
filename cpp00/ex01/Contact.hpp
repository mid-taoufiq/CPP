#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        int get_contact();
        std::string show_firstname();
        std::string show_lastname();
        std::string show_nickname();
        std::string show_phonenumber();
        std::string show_darkestsecret();
};

#endif