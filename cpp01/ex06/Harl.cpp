#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::complain(std::string level)
{
    int i = 0;
    void (Harl::*debug_ptr)() = &Harl::debug;
    void (Harl::*info_ptr)() = &Harl::info;
    void (Harl::*warning_ptr)() = &Harl::warning;
    void (Harl::*error_ptr)() = &Harl::error;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(i < 4)
    {
        if (level == levels[i])
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*debug_ptr)();
            (this->*info_ptr)();
            (this->*warning_ptr)();
            (this->*error_ptr)();
            break;
        case 1:
            (this->*info_ptr)();
            (this->*warning_ptr)();
            (this->*error_ptr)();
            break;
        case 2:
            (this->*warning_ptr)();
            (this->*error_ptr)();
            break;
        case 3:
            (this->*error_ptr)();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return (1);
    }
    return (0);
}
