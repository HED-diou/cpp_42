/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:33:02 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 16:46:52 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include<iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &type;
    
    public:
        HumanA(std::string name,  Weapon &type);
        ~HumanA();
        void attack();
          
};

#endif