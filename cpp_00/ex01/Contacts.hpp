/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:41:28 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/17 13:49:57 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>


class Contacts
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contacts();
        ~Contacts();
        void    set_first_name(std::string name);
        std::string get_first_name(void) const;
        
        void    set_last_name(std::string las);
        std::string get_last_name(void) const;

        void    set_nickname(std::string nic);
        std::string get_nickname(void) const;

        void    set_phone(std::string phon);
        std::string get_phone(void) const;

        void    set_dark(std::string dark);
        std::string get_dark(void) const;
};

#endif