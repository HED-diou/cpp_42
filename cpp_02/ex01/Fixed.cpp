/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:27:05 by hed-diou          #+#    #+#             */
/*   Updated: 2022/12/04 13:27:05 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	return this->val;
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

Fixed::Fixed(void)
{
    this->val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
	std::cout << "Copy constructor called" << std::endl;
}


Fixed::Fixed(const int val)
{
	this->val = val << bit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
	this->val = std::roundf((val) * (1 << this->bit));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (std::roundf(this->val) / (1 << this->bit));
}

int Fixed::toInt(void) const
{
	return this->val >> bit;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->val = src.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &sys, Fixed const &src)
{
	sys << src.toFloat();
	return sys;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
