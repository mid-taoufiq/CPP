/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:21:42 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/05 10:20:39 by tibarike         ###   ########.fr       */
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
        std::cout << "type one of these commads [ADD] [SEARCH] [EXIT]:";
        if (!std::getline(std::cin, line))
            std::cout << "wrong command!!" << std::endl;
        if (line == "ADD")
        {
            if (!phonebook.add_contacts())
                continue ;
        }
        else if (line == "SEARCH")
            if (!phonebook.search_contacts())
				continue ;
        else if (line == "EXIT")
            break;
        else
            std::cout << "wrong command!!" << std::endl;
    }
}
