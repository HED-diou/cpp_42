/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:11 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/13 16:14:25 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
    std::cout << "haw haw" << std::endl;
}

Dog::Dog()
{
    this->b = new Brain;
    this->type = "Dog";   
}

Dog::~Dog()
{
	delete b;
	std::cout << "deconstructor Dog called" << std::endl;
}

Brain* Dog::getb() const
{
    return b;
}

Dog::Dog(Dog const &copy) : Animal()
{
	std::cout << "Copy constructor called" << std::endl;
	this->b = new Brain(*copy.getb());
}

Dog &Dog::operator=(Dog const &objet)
{
    if (this != &objet)
	{
		delete this->b;
		this->b = new Brain(*objet.getb());
	}
	return *this;
}