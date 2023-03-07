/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:00:44 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/28 19:00:44 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();

        ClapTrap &operator=(ClapTrap const &obj);
        ClapTrap(ClapTrap const &copy);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string get_name() const;
        void set_name(std::string name);

        int get_hit_points() const;
        void set_hit_points(int val);

        int get_energy_points() const;
        void set_energy_points(int val);

        int get_attack_damage() const;
        void set_attack_damage(int val);

};

#endif
