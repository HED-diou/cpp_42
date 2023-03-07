/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:06:26 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/17 02:31:32 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter( T *arr, int len, void (func)(T const &))
{
    for (int i = 0; i < len; i++)
    {
        func(arr[i]);
    }
}

#endif 