/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:46:50 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 19:59:25 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a("hello");
    ClapTrap b("world");
    FragTrap c("rrr");

    a.attack(b.get_name());
    b.takeDamage(4);
    a.attack(c.get_name());
    c.takeDamage(4);
    c.highFivesGuys();

}