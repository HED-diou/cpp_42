/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:02:30 by hed-diou          #+#    #+#             */
/*   Updated: 2022/12/18 16:59:39 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "wrong animal default constructor" <<std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "wrong animal parametric constructor" <<std::endl;
    this->type = type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "wrong animal destructor"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "wrong animal sound" << std::endl;
}