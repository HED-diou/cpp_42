/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:41:14 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 16:19:12 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie foo1("foo1");
    foo1.announce();
    Zombie* foo2 = foo1.newZombie("foo2");
    foo2->announce();
    foo1.randomChump("foo3");
}