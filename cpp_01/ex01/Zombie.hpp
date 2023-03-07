/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:44:24 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 14:54:04 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include<iostream>

class Zombie {

    private:
        std::string nom;
    

    public:
        Zombie();
        Zombie(std::string str);
        void setZombieName(std::string name);
        ~Zombie();
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );


#endif