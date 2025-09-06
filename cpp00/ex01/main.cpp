/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:21:42 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/06 12:30:21 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string line;
    Phonebook phonebook;

    std::cout << "PHONEBOOK!!" << std::endl;

    while (1)
    {
        std::cout << "type one of these commands [ADD] [SEARCH] [EXIT]:";
        if (!std::getline(std::cin, line) || line.empty())
        {
            if (std::cin.eof())
                break;
            std::cout << "wrong command!!" << std::endl;
            continue;
        }
        if (line == "ADD")
        {
            if (!phonebook.add_contacts())
                continue ;
        }
        else if (line == "SEARCH")
        {
            if (!phonebook.search_contacts())
                continue ;        
        }
        else if (line == "EXIT")
            break;
        else
        {
            std::cout << "wrong command!!" << std::endl;
            continue;
        }
    }
}
