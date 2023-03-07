/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:13:04 by hed-diou          #+#    #+#             */
/*   Updated: 2022/12/22 14:07:48 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *b;
    public:
        void makeSound() const;
        Cat();
        ~Cat();
        Cat(Cat const &copy);
        Cat &operator=(Cat const &objet);
        Brain* getb() const;
};


#endif