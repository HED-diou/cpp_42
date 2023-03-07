/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:50:51 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 13:59:40 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "Harl : Debug\n";
}

void Harl::info()
{
    std::cout <<  "Harl : info\n";
}

void Harl::warning()
{
    std::cout << "Harl : Warning\n";
}

void Harl::error()
{
    std::cout << "Harl : Error\n";
}

void Harl::complain( std::string level )
{
    
    std::string t [4] = {"DEBUG","INFO","WARNING","ERROR"};
    void (Harl::*r[4])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
    int i = 0;
    while(i <= 4 && t[i].compare(level))
        i++;

    if (i > 4) { exit(0); } else { (this->*r[i])(); };
    
    
    
}