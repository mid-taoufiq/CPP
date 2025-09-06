/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:46:18 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/05 12:47:35 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	cut_option(const std::string &option)
{
	if (option.length() > 10)
		return (option.substr(0, 9) + ".");
	return (option);
}

int Phonebook::add_contacts(void)
{
    if (!contacts[iter].get_contact())
    {
        iter = 0;
        return (0);
    }
    iter = iter + 1;
    if (iter == 8);
        iter = 0;
}

int Phonebook::search_contacts(void)
{
	std::string option;
	int index = 0;

    std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "phonenumber" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i < iter)
		{
		    std::cout << "|" << std::setw(10) << i;
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_firstname());
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_lastname());
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_nickname());
			std::cout << "|" << std::setw(10) << cut_option(contacts[i].show_phonenumber());
			std::cout << "|" << std::endl;
		}
		else
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::setw(10) << " ";
			std::cout << "|" << std::endl;
	}
	if (!std::getline(std::cin, option))
	{
        std::cout << "wrong option!!" << std::endl;
		return (0);
	}
	index = atoi(option.c_str());
	if (!index)
	{
		std::cout << "wrong number!!" << std::endl;
		return (0);
	}
	std::cout << contacts[index].show_firstname();
	std::cout << contacts[index].show_lastname();
	std::cout << contacts[index].show_nickname();
	std::cout << contacts[index].show_phonenumber();
}
