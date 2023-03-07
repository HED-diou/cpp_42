/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:31:14 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/13 17:12:12 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "mew mew" << std::endl;
}

Cat::Cat()
{
    this->b = new Brain;
    this->type = "Cat";   
}

Cat::~Cat()
{
	delete b;
	std::cout << "deconstructor Cat called" << std::endl;
}

Brain* Cat::getb() const
{
    return b;
}

Cat::Cat(Cat const &copy) : Animal()
{
	std::cout << "Copy constructor called" << std::endl;
	this->b = new Brain(*copy.getb());
}

Cat &Cat::operator=(Cat const &objet)
{
    if (this != &objet)
	{
		delete this->b;
		this->b = new Brain(*objet.getb());
	}
	return *this;
}