#include "contact.hpp"

std::string contact::show_firstname() {return (first_name);}
std::string contact::show_lastname() {return (last_name);}
std::string contact::show_nickname() {return (nickname);}
std::string contact::show_phonenumber() {return (phone_number);}
std::string contact::show_darkestsecret() {return (darkest_secret);}

int is_valid(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if (!isprint(str[i]))
            return (0);
        if (isspace(str[i]))
            return (0);
    }
    return (1);
}

int    contact::get_contact()
{
    std::string fname = first_name;
    std::string lname = last_name;
    std::string nname = nickname;
    std::string pnumber = phone_number;
    std::string secret = darkest_secret;

    std::cout << "first name: ";
    if (!std::getline(std::cin, first_name) || first_name.empty() || !is_valid(first_name))
    {
        std::cout << "wrong input" << std::endl;
        first_name = fname;
        return (0);
    }    
    std::cout << "last name: ";
    if (!std::getline(std::cin, last_name) || last_name.empty() || !is_valid(last_name))
    {
        std::cout << "wrong input" << std::endl;
        last_name = lname; first_name = fname;
        return (0);
    }    
    std::cout << "nickname: ";
    if (!std::getline(std::cin, nickname) || nickname.empty() || !is_valid(nickname))
    {
        std::cout << "wrong input" << std::endl;
        nickname = nname; last_name = lname; first_name = fname;
        return (0);
    }    
    std::cout << "phone number: ";
    if (!std::getline(std::cin, phone_number) || phone_number.empty() || !is_valid(phone_number))
    {
        std::cout << "wrong input" << std::endl;
        phone_number = pnumber; nickname = nname; last_name = lname; first_name = fname;
        return (0);
    }    
    std::cout << "darkest secret: ";
    if (!std::getline(std::cin, darkest_secret) || darkest_secret.empty() || !is_valid(darkest_secret))
    {
        std::cout << "wrong input" << std::endl;
        darkest_secret = secret;
        phone_number = pnumber; nickname = nname; last_name = lname; first_name = fname;
        return (0);
    }
    return (1);
}
