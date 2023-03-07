/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:40:27 by hed-diou          #+#    #+#             */
/*   Updated: 2022/11/19 12:43:19 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac , char **av)
{
    
    if(ac != 4)
    {
        std::cerr << "Error : invalid args" << std::endl;
        exit(1);
    }
    
    std::string fileText;
    std::string fileText2;
    std::string s1 = av[2];
    std::string s2 = av[3];
    if(s1 == "" || s2 == "")
        exit(1);
    std::ifstream MyReadFile(av[1]);
    std::string name = av[1];
    name += ".replace";
    std::ofstream MyFile(name);
    
    if(MyReadFile == 0 || MyFile == 0)
    {
        std::cerr << "Error : invalid file name" << std::endl;
        exit(1);
    }
    while(getline(MyReadFile, fileText))
        fileText2 += fileText + "\n";
    
    fileText2 = replace(fileText2, s1, s2);
    MyFile << fileText2;
}
