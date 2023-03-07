/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:44:25 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 16:27:41 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
    std::cout << "Zombie Created" << std::endl;
}


Zombie::Zombie(std::string str)
{
    this->nom = str;
}


Zombie::~Zombie()
{
    std::cout << "Zombie destructed" << std::endl;   
}

void Zombie::setZombieName(std::string name)
{
    nom = name;
}

void Zombie::announce()
{
    std::cout << nom << ": BraiiiiiiinnnzzzZ..." << std::endl;  
}

