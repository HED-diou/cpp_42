/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:00:41 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 19:50:04 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << name << " is invoced" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &copy)
{
    *this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << "Assignation operator called" << std::endl;
    name = src.name;
    hit_points = src.hit_points;
    energy_points = src.energy_points;
    attack_damage = src.attack_damage;
	return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << " is disconected" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
        if (this->hit_points <= 0)
        std::cout << "ScavTrap: " << this->name << " don't have hit points" << std::endl;
    else if(this->energy_points <= 0 )
        std::cout << "ScavTrap: " << this->name << " don't have energy" << std::endl;
    else
    {
        std::cout << "ScavTrap: " << this->name << " attacks "<< target << std::endl;
        this->energy_points--;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << this->name << " on Guard Gate" << std::endl;
}