#include "Replace.hpp"

void	replace_loop(std::string file_name, std::string text, std::string replaced_str, std::string replace_str)
{
	std::string outfile_name = file_name + ".replace";
	std::ofstream outfile(outfile_name.c_str());
	size_t found_index = 0;
	size_t start = 0;
	if (!outfile.is_open())
	{
		std::cerr << "can't open outfile\n";
		exit(1);
	}
	while ((found_index = text.find(replaced_str, start)) != std::string::npos)
	{
		text.erase(found_index, replaced_str.length());
		text.insert(found_index, replace_str);
		start = (found_index + replace_str.length());
	}
	outfile << text;
}

void append_outfile(char **argv)
{
	std::string file_name = argv[1];
	std::string replaced_str = argv[2];
	std::string replace_str = argv[3];
	std::string text;
	std::ifstream infile(file_name.c_str());
	if (file_name.empty() || replace_str.empty())
	{
		std::cerr << "first argument or second argument is empty" << std::endl;
		exit(1);	
	}
	if (!getline(infile, text, '\0'))
	{
		std::cerr << "getline fail" << std::endl;
		exit(1);
	}
	std::string outfile_name = file_name + ".replace";
	std::ofstream outfile(outfile_name.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "can't open outfile\n";
		exit(1);
	}
	replace_loop(file_name, text, replaced_str, replace_str);
}
