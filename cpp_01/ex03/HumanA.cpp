/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:33:08 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 16:46:48 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name,  Weapon &type1) : type(type1)
{
    this->name = name;
}

HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout << name << "  attacks with their " << type.getType() << std::endl;
}