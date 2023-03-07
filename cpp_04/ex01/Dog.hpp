/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:13:42 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/13 00:06:58 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *b;
    public:
        void makeSound() const;
        Dog();
        ~Dog();
        Dog(Dog const &copy);
        Dog &operator=(Dog const &objet);
        Brain* getb() const;
};


#endif