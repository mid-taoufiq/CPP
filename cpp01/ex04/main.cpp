#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "arguments error" << std::endl;
		return (1);
	}
	std::string text;
	std::size_t found_index = 0;
	std::size_t start = 0;
	std::string replaced_str = argv[2];
	std::ifstream infile(argv[1]);
	std::string outfile_tmp = argv[1];
	std::string outfile_name = outfile_tmp + ".replace";
	std::ofstream outfile(outfile_name);
	if (!getline(infile, text, '\0'))
	{
		std::cerr << "getline fail" << std::endl;
		return (1);
	}
	while ((found_index = text.find(replaced_str, start)) != std::string::npos)
	{
		text.erase(found_index, replaced_str.length());
		text.insert(found_index, argv[3]);
	}
	outfile << text;
	return 0;
}
