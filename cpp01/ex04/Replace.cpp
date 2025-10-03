#include "Replace.hpp"

int	replace_loop(std::string file_name, std::string text, std::string replaced_str, std::string replace_str)
{
	std::string outfile_name = file_name + ".replace";
	std::ofstream outfile(outfile_name.c_str());
	size_t found_index = 0;
	size_t start = 0;
	if (!outfile.is_open())
	{
		std::cerr << "can't open outfile" << std::endl;
		return (0);
	}
	while ((found_index = text.find(replaced_str, start)) != std::string::npos)
	{
		text.erase(found_index, replaced_str.length());
		text.insert(found_index, replace_str);
		start = (found_index + replace_str.length());
	}
	outfile << text;
	return (1);	
}

int append_outfile(char **argv)
{
	std::string file_name = argv[1];
	std::string replaced_str = argv[2];
	std::string replace_str = argv[3];
	std::string text;
	if (file_name.empty() || replaced_str.empty())
	{
		std::cerr << "first argument or second argument is empty" << std::endl;
		return (0);
	}
	std::ifstream infile(file_name.c_str());
	if (!infile.is_open())
	{
		std::cerr << "can't open infile" << std::endl;
		return (0);
	}
	if (!getline(infile, text, '\0'))
	{
		std::cerr << "getline fail" << std::endl;
		return (0);
	}
	std::string outfile_name = file_name + ".replace";
	std::ofstream outfile(outfile_name.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "can't open outfile" << std::endl;
		return (0);	
	}
	return (replace_loop(file_name, text, replaced_str, replace_str));
}
