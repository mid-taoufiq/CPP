#include <iostream>
int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;//pointer 3ibara 3an variable size 8byte
    std::string &stringREF = string; //ref alias dyal string
    // dayer b7al const khaso ideclara o itseta in the same line
    // compiler howa lli kihandle had ref

    std::cout << &string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}
