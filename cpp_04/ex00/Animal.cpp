/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:22:12 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/12 19:51:22 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constractor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal parametric constractor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    this->type = copy.type;
}

Animal &Animal::operator=(Animal const &other)
{
    if (this != &other) {
       type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor called" << std::endl;
}


std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "sound of nature" << std::endl;
}
