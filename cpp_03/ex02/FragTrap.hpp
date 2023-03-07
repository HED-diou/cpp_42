/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:57:06 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/10 19:57:57 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap : public ClapTrap{

    private:
        /* data */
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &obj);
        FragTrap(FragTrap const &copy);
        void highFivesGuys(void);

};


#endif