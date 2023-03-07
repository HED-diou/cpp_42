/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:06:33 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/17 15:09:52 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contacts.hpp"

static void print_instruction()
{
    std::cout << "\033[1;47m-----------------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;47m| You can use these commends ADD, SEARCH, EXIT      |\033[0m" << std::endl;
    std::cout << "\033[1;47m-----------------------------------------------------\033[0m" << std::endl;
}

int main()
{
    PhoneBook book;
    std::string prompt;

    print_instruction();
    while(true)
    {
        std::cout << "\n>> ";                                                                                 
        getline(std::cin,prompt);
        if(prompt == "ADD")
        {
            book.addContact(0);
        }
        else if(prompt == "SEARCH")
            book.searchContact();
        else if(prompt == "EXIT" || std::cin.eof())
            exit(0);
    }
    return (0);
}




