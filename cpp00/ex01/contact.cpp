/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:25:27 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/04 09:53:36 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int is_valid(std::string str)
{
    for(int i = 0; str.size(); i++)
    {
        if (!isprint(str[i]))
            return (0);
        if (!isspace(str[i]))
            return (0);
    }
    return (1);
}

int    contact::get_contact()
{
    std::cout << "first name: ";
    if (!std::getline(std::cin, first_name) || first_name.empty() || !is_valid(first_name))
    {
        std::cout << "wrong input" << std::endl;
        return (0);
    }    
    std::cout << "last name: ";
    if (!std::getline(std::cin, last_name) || last_name.empty() || !is_valid(last_name))
    {
        std::cout << "wrong input" << std::endl;
        return (0);
    }    
    std::cout << "nickname: ";
    if (!std::getline(std::cin, nickname) || nickname.empty() || !is_valid(nickname))
    {
        std::cout << "wrong input" << std::endl;
        return (0);
    }    
    std::cout << "phone number: ";
    if (!std::getline(std::cin, phone_number) || phone_number.empty() || !is_valid(phone_number))
    {
        std::cout << "wrong input" << std::endl;
        return (0);
    }    
    std::cout << "darkest secret: ";
    if (!std::getline(std::cin, darkest_secret) || darkest_secret.empty() || !is_valid(darkest_secret))
    {
        std::cout << "wrong input" << std::endl;
        return (0);
    }
    return (1);
}
