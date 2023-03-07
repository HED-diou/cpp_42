/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:09:19 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/15 14:09:19 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "data.hpp"
#include <string>

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data		*ptr;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr = new Data;
	ptr->data = "hamza";

	raw = serialize(ptr);
	new_ptr = deserialize(raw);

	std::cout << "Data of ptr     : " << ptr->data << std::endl;
	std::cout << "Data of new_ptr : " << new_ptr->data << std::endl;

	delete ptr;
}

