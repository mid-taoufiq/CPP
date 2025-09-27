#include "Phonebook.hpp"

std::string	cut_option(const std::string option)
{
	if (option.length() > 10)
		return (option.substr(0, 9) + ".");
	return (option);
}

Phonebook::Phonebook()
{
	iter = 0;
	count = 0;
}

int Phonebook::add_contacts(void)
{
	if (iter == 8)
	{
		iter = 0;
	}
    if (!contacts[iter].get_contact())
	{
        return (0);
	}
	iter++;
	if (count < 8)
		count++;
	return (1);
}

int Phonebook::search_contacts(void)
{
	std::string option;
	int index = 0;

    std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::setw(10) << "number" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i < count)
		{
		    std::cout << "|" << std::setw(10) << i;
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_firstname());
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_lastname());
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_nickname());
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_phonenumber());
			std::cout << "|" << std::endl;
		}
		else
		{
			std::cout << "|" << std::setw(10) << i;
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::endl;
		}
	}
	std::cout << "index: ";
	if (!std::getline(std::cin, option) || option.empty())
		return (std::cerr << "wrong option!!" << std::endl, 0);
	for (size_t i = 0; i < option.size(); i++)
	{
		if (!std::isdigit(option[i]))
			return (std::cerr << "incorrect number!!" << std::endl, 0);
	}
	index = atoi(option.c_str());
	if (index > 7 || index < 0)
		return (std::cerr << "wrong range!!" << std::endl, 0);
	std::cout << "first name: " << contacts[index].show_firstname() << std::endl;
	std::cout << "last name: " << contacts[index].show_lastname() << std::endl;
	std::cout << "nickname: " << contacts[index].show_nickname() << std::endl;
	std::cout << "phonenumber: " << contacts[index].show_phonenumber() << std::endl;
	std::cout << "darkest secret: " << contacts[index].show_darkestsecret() << std::endl;
	return (1);
}
