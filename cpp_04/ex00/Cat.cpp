/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:31:14 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/12 19:51:36 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "mew mew" << std::endl;
}

Cat::Cat()
{
    std::cout << "Cat default constractor called" << std::endl;
    this->type = "Cat";   
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
    this->type = copy.type;
}

Cat &Cat::operator=(Cat const &other)
{
    if (this != &other) {
       type = other.type;
    }
    return *this;
}
