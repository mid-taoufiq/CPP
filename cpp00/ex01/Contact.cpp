#include "Contact.hpp"

std::string Contact::show_firstname() {return (first_name);}
std::string Contact::show_lastname() {return (last_name);}
std::string Contact::show_nickname() {return (nickname);}
std::string Contact::show_phonenumber() {return (phone_number);}
std::string Contact::show_darkestsecret() {return (darkest_secret);}

int is_flvalid(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if (!isprint(str[i]))
            return (0);
        if (!isalpha(str[i]) && !isspace(str[i]))
            return (0);
    }
    return (1);
}

int is_nvalid(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if (!isprint(str[i]))
            return (0);
    }
    return (1);
}

int is_pvalid(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }
    return (1);
}

int is_dvalid(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if (!isprint(str[i]))
            return (0);
        if (!isalnum(str[i]))
            return (0);
    }
    return (1);
}

int    Contact::get_contact()
{
    std::string fname = first_name;
    std::string lname = last_name;
    std::string nname = nickname;
    std::string pnumber = phone_number;
    std::string secret = darkest_secret;

    std::cout << "first name: ";
    if (!std::getline(std::cin, first_name) || first_name.empty() || !is_flvalid(first_name))
    {
        std::cerr << "wrong input" << std::endl;
        first_name = fname;
        return (0);
    }    
    std::cout << "last name: ";
    if (!std::getline(std::cin, last_name) || last_name.empty() || !is_flvalid(last_name))
    {
        std::cerr << "wrong input" << std::endl;
        last_name = lname; first_name = fname;
        return (0);
    }    
    std::cout << "nickname: ";
    if (!std::getline(std::cin, nickname) || nickname.empty() || !is_nvalid(nickname))
    {
        std::cerr << "wrong input" << std::endl;
        nickname = nname; last_name = lname; first_name = fname;
        return (0);
    }    
    std::cout << "phone number: ";
    if (!std::getline(std::cin, phone_number) || phone_number.empty() || !is_pvalid(phone_number))
    {
        std::cerr << "wrong input" << std::endl;
        phone_number = pnumber; nickname = nname; last_name = lname; first_name = fname;
        return (0);
    }    
    std::cout << "darkest secret: ";
    if (!std::getline(std::cin, darkest_secret) || darkest_secret.empty() || !is_dvalid(darkest_secret))
    {
        std::cerr << "wrong input" << std::endl;
        darkest_secret = secret;
        phone_number = pnumber; nickname = nname; last_name = lname; first_name = fname;
        return (0);
    }
    return (1);
}
