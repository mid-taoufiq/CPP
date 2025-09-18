#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc != 2)  
    {
        std::cout << "[ERROR]\nEnter two argument ex: ./Harl DEBUG" << std::endl;
        return(1);
    }
    return(harl.complain(argv[1]));
}
