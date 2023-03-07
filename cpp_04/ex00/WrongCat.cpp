/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:14:37 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/12 20:25:43 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "wrong cat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "wrong cat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "wrong cat sound" << std::endl;
    
}

WrongCat::WrongCat(const WrongCat& copy)
{
    this->type = copy.type;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
    if (this != &other) {
       type = other.type;
    }
    return *this;
}
