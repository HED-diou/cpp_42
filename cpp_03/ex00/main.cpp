/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:01:30 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 20:01:31 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("hello");
    ClapTrap b("world");

    a.attack(b.get_name());
    b.takeDamage(-14);
    a.attack(b.get_name());
    b.takeDamage(4);
    a.attack(b.get_name());
    b.takeDamage(4);
    b.takeDamage(5);
    a.attack(b.get_name());
    b.takeDamage(4);
    b.attack(a.get_name());
}