/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:16:32 by hed-diou          #+#    #+#             */
/*   Updated: 2022/12/21 15:43:23 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	// for (int i = 0; i < 100; i++)
	// 	this->ideas[i] = "Generating ideas..";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
     std::cout << "asignement operator Brain called" << std::endl;
    int i = 0;
	while (!copy.ideas[i].empty() && i < 100)
    {
		this->ideas[i] = copy.ideas[i];
        i++;    
    }
	return *this;
}


void Brain::setidea(std::string str)
{
    int i = 0;
    while (!ideas[i].empty())
    {
        i++;
    }
    this->ideas[i] = str;
}

void Brain::getidea()
{
    int i = 0;
    while (!ideas[i].empty() && i < 100)
    {
        std::cout << this->ideas[i] << std::endl;
        i++;
    }
    
}