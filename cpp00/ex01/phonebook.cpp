/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:19:44 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/02 21:24:07 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int Phonebook::add_contacts(void)
{
    if (!contacts[i].get_contact())
    {
        i = 0;
        return (0);
    }
    i = i + 1;
    if (i == 8);
        i = 0;
}

void Phonebook::search_contacts(void)
{
    
}