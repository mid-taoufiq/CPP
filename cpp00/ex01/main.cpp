#include "phonebook.hpp"

int main()
{
    std::string line;
    Phonebook phonebook;

    std::cout << "PHONEBOOK!!" << std::endl;

    while (1)
    {
        std::cout << "type one of these commands [ADD] [SEARCH] [EXIT]:";
        if (!std::getline(std::cin, line) || line.empty())
        {
            if (std::cin.eof())
                break;
            std::cerr << "wrong command!!" << std::endl;
            continue;
        }
        if (line == "ADD")
        {
            if (!phonebook.add_contacts())
                continue ;
        }
        else if (line == "SEARCH")
        {
            if (!phonebook.search_contacts())
                continue ;        
        }
        else if (line == "EXIT")
            break;
        else
        {
            std::cerr << "wrong command!!" << std::endl;
            continue;
        }
    }
}
