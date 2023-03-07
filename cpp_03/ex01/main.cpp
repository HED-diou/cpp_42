/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:00:51 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 18:35:12 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("a");
    ScavTrap c("c");
    ClapTrap b("b");

    c.beRepaired(2);
    c.attack(a.get_name());
    a.takeDamage(4);
    a.attack(b.get_name());
    b.takeDamage(4);
    a.attack(c.get_name());
    c.guardGate();

}