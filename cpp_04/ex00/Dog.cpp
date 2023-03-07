/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:11 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/12 20:27:29 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const 
{
    std::cout << "haw haw" << std::endl;
}

Dog::Dog()
{
    
    std::cout << "Dog default constractor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog desconstructor called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Dog copy constructor" << std::endl;
    this->type = copy.type;
}

Dog &Dog::operator=(Dog const &other)
{
    if (this != &other) {
       type = other.type;
    }
    return *this;
}