/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:44:27 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/19 12:41:27 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
    if(N <= 0)
        exit(1);
    Zombie *foo;
    foo = new Zombie [N];
    int i = 0;
    while(i < N)
    {
        foo[i].setZombieName(name);
        i++;
    }
    return foo;
}