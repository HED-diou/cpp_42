/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:46:48 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 20:00:28 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << name << " join the game" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << name << " quite the game" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
    *this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	std::cout << "Assignation operator called" << std::endl;
    name = src.name;
    hit_points = src.hit_points;
    energy_points = src.energy_points;
    attack_damage = src.attack_damage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: high Five Guys !?" << std::endl;
}