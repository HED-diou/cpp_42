/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:27:08 by hed-diou          #+#    #+#             */
/*   Updated: 2022/12/04 13:27:08 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int val;
        static const int bit = 8;

    public:
        Fixed();
        Fixed(Fixed const &copy);
        Fixed(const int intNum);
	    Fixed(const float floatNum);
        ~Fixed();
        Fixed &operator=(Fixed const &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &sys, Fixed const &src);

#endif