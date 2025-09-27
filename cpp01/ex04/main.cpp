#include <iostream>
#include <fstream>
#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "arguments error" << std::endl;
		return (1);
	}
	append_outfile(argv);
	return 0;
}
