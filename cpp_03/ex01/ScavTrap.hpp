/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:01:22 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 20:01:23 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{ 
    private:
        /* data */
    public:
        ScavTrap(std::string name);
        ScavTrap &operator=(ScavTrap const &obj);
        ScavTrap(ScavTrap const &copy);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
    
};





#endif