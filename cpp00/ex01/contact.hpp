/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:48:22 by tibarike          #+#    #+#             */
/*   Updated: 2025/09/06 14:16:39 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

class contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        int get_contact();
        std::string show_firstname() const {return (first_name);}
        std::string show_lastname() const {return (last_name);}
        std::string show_nickname() const {return (nickname);}
        std::string show_phonenumber() const {return (phone_number);}		
};

#endif