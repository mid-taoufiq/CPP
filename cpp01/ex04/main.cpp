#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::string text;

	std::string outfile_name = argv[1] + ".replace";
	size_t found_index;
	std::ifstream infile(argv[1]);

	std::ofstream outfile();
	if (argc != 4 )
	{
		std::cerr << "arguments error" << std::endl;
		return (1);
	}
	if (!getline(infile, text, '\0'))
	{
		std::cerr << "getline fail" << std::endl;
		return (1);
	}
	while ((found_index = text.find(argv[2])) != std::string::npos)
	{
		std::
	}
	return 0;
}