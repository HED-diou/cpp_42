/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:32:58 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 10:02:39 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB()
{
    
}

HumanB::HumanB(std::string name1) : name(name1), type(NULL)
{
}

HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
    if(type == NULL)
        std::cout << name << " dosen't have a weapon" << std::endl; 
    else
    {
        if(type->getType().empty())
            std::cout << name << " dosen't have a weapon" << std::endl;
        else
            std::cout << name << "  attacks with their " << type->getType() << std::endl;
    }
}

void HumanB::setWeapon(Weapon &str)
{
    type = &str;
    std::cout << "human b set wepon " << type->getType() <<std::endl;
}