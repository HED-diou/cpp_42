/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:05:50 by hed-diou          #+#    #+#             */
/*   Updated: 2022/10/12 17:01:04 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_H__
#define __HARL_H__

#include<iostream>


class Harl
{
    public:
        void complain( std::string level );
        
    private:
        void (debug)( void );
        void (info)( void );
        void (warning)( void );
        void (error)( void );
};


#endif