/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:32:51 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 16:45:54 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include<iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *type;

    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &str);
        void attack();
          
};

#endif