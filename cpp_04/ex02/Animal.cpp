/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:22:12 by hed-diou          #+#    #+#             */
/*   Updated: 2022/12/18 16:12:39 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default Animal constractor called" << std::endl;
}

Animal::Animal(const std::string& type)
{
    this->type = type;
    std::cout << "parametric Animal constractor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "deconstructor Animal called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "sound of nature" << std::endl;
}