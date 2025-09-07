#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

class contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        int get_contact();
        std::string show_firstname() {return (first_name);}
        std::string show_lastname() {return (last_name);}
        std::string show_nickname() {return (nickname);}
        std::string show_phonenumber() {return (phone_number);}
        std::string show_darkestsecret() {return (darkest_secret);}
};

#endif