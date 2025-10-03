#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>


int replace_loop(std::string file_name, std::string text, std::string replaced_str, std::string replace_str);
int append_outfile(char **argv);

#endif