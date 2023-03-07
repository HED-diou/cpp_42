/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:19:38 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/16 17:43:19 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try 
    {
        Array<int> myArray(7);
        myArray[0] = 10;
        myArray[1] = 20;
        myArray[2] = 30;
        myArray[3] = 40;
        myArray[4] = 50;

        std::cout << "Array size: " << myArray.getSize() << std::endl;
        std::cout << "Array elements: " << std::endl;
        myArray.getData();
        std::cout << "Accessing element at index 2: " << myArray[2] << std::endl;
        std::cout << "Accessing element at index 5 (out of bounds): " << myArray[5] << std::endl;  // this will throw an exception
    } 
    catch (const std::overflow_error& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}