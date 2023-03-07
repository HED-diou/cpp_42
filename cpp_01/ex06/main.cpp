/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:02:50 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/18 13:51:53 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static int defineExpression(std::string str)
{
    if(!str.compare("DEBUG"))
        return (0);
    else if(!str.compare("INFO"))
        return (1);
    else if(!str.compare("WARNING"))
        return (2);
    else if(!str.compare("ERROR"))
        return (3);
    return (-1);
    
}

int main(int ac , char **av)
{
    Harl harl;

    if(ac != 2)
        return 0;
    
    std::string val = av[1];
    int expression = defineExpression(val);
    switch (expression)
    {
        case 0:
            harl.complain("DEBUG");
            expression = 1;
        case 1:
            harl.complain("INFO");
            expression = 2;
        case 2:
            harl.complain("WARNING");
            expression = 3;
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
    return 0;
}