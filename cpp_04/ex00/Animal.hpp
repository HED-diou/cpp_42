/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:01:07 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/13 17:08:51 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        
        std::string getType() const;
        virtual void makeSound() const;
        
};


#endif