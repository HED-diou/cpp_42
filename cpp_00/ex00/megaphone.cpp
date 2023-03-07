/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:06:40 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/17 15:43:42 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    char ch;
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            ch = std::toupper(av[i][j]);
            std::cout << ch;
            j++;
        }
        i++;
    }
    std::cout << '\n';
}
