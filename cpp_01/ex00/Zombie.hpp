/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:41:04 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 16:18:58 by hed-diou         ###   ########.fr       */
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
        ~Zombie();
        void announce( void );
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};


#endif
