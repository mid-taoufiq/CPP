#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc != 2)  
    {
        std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
        return(1);
    }
    if (!harl.complain(argv[1]))
        return(1);
}
