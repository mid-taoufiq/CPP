/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:16:22 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/02 21:21:51 by tibarike         ###   ########.fr       */
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
                return (0);
        }
        else if (line == "SEARCH")
            phonebook.search_contacts();
        else if (line == "EXIT")
            break;
        else
            std::cout << "wrong command!!" << std::endl;
    }
}
