/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:15:32 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/19 10:07:20 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace(std::string fileText2, std::string s1, std::string s2)
{
    size_t a;
    a = fileText2.find(s1);
    while (a >= 0 && a != std::string::npos)
    {
        fileText2.erase(a, s1.length());
        fileText2.insert(a, s2);
        a = fileText2.find(s1, a + s2.length());
    }
    return fileText2;
}