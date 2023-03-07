/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:01:37 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 20:01:38 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::get_name() const
{
    return this->name;
}
void ClapTrap::set_name(std::string name)
{
    this->name = name;
}

int ClapTrap::get_hit_points() const
{
    return this->hit_points;
}
void ClapTrap::set_hit_points(int val)
{
    this->hit_points = val;
}

int ClapTrap::get_energy_points() const
{
    return this->energy_points;
}
void ClapTrap::set_energy_points(int val)
{
    this->energy_points = val;
}

int ClapTrap::get_attack_damage() const
{
    return this->attack_damage;
}
void ClapTrap::set_attack_damage(int val)
{
    this->attack_damage = val;
}

ClapTrap::ClapTrap()
{
    this->name = "default";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << "default character invoced" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << name << " is called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    *this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = src.name;
    this->hit_points = src.hit_points;
    this->energy_points = src.energy_points;
    this->attack_damage = src.attack_damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " destucted" << std::endl;
}

void ClapTrap::attack(const std::string& target) // -1
{
    if (this->hit_points <= 0)
        std::cout << "ClapTrap: " << this->name << " don't have hit points" << std::endl;
    else if(this->energy_points <= 0 )
        std::cout << "ClapTrap: " << this->name << " don't have energy" << std::endl;
    else
    {
        std::cout << "ClapTrap: " << this->name << " attacks "<< target << std::endl;
        this->energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) // ~ ~
{
    if (this->hit_points <= 0)
        std::cout << "ClapTrap: " << this->name << " don't have hit points" << std::endl;
    else
    {
        std::cout << "ClapTrap: causing " << amount << " points of damage!" << std::endl;
        this->hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount) // -1
{

    if (this->hit_points <= 0)
        std::cout << "ClapTrap: " << this->name << " don't have hit points" << std::endl;
    else if(this->energy_points <= 0 )
        std::cout << "ClapTrap: " << this->name << " don't have energy" << std::endl;
    else
    {
        std::cout << "ClapTrap" << this->name << "be Repaired +4" << std::endl;
        this->energy_points--;
        this->hit_points += amount;
    }
}
