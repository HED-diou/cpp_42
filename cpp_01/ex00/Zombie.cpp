/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:41:06 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 16:25:10 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    std::cout << str + " created\n";
    this->nom = str;
}

Zombie::~Zombie()
{
    std::cout << "closed\n";
}

void Zombie::announce()
{
    std::cout << nom << ": BraiiiiiiinnnzzzZ..." << std::endl;  
}

