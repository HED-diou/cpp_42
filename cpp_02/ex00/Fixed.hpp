/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:26:56 by hed-diou          #+#    #+#             */
/*   Updated: 2022/12/04 13:26:56 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int val;
        static const int bit = 8;

    public:
        Fixed();
        Fixed(Fixed const &copy);
        Fixed &operator=(Fixed const &objet);
        ~Fixed();
        int getRawBits(void) const;
	    void setRawBits(int const raw);
};

#endif