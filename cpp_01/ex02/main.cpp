/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:02:07 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/19 12:42:21 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string& stringREF = str;
    std::string* stringPTR = &str;
    std::cout << "\n\n\n ADRESS \n";
    std::cout << "adress of str : " << &str << std::endl;
    std::cout << "adress of ptr : " << stringPTR << std::endl;
    std::cout << "adress of ref : " << &stringREF << std::endl;
    std::cout << "\n\n\n POOINTER \n";
    std::cout << "val str >> " << str << std::endl;
    std::cout << "val ref >> " << stringREF << std::endl;
    std::cout << "val ptr >> " << *stringPTR << std::endl;
}