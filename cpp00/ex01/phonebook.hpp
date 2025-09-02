/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:24 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/02 21:22:27 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iostream>
#include <string>

class Phonebook
{
    private:
        contact contacts[8];
        int i;
    public:
        int add_contacts(void);
        void search_contacts(void);
};

#endif