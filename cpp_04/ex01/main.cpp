/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:57:21 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/13 17:10:13 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



void func2()
{
	Animal *Animal[6];

	for (int i = 0; i < 6; ++i)
	{
		if (i % 2 == 0)
			Animal[i] = new Cat();
		else
			Animal[i] = new Dog();
		Animal[i]->makeSound();
	}

 	std::cout << "------------------------------" << std::endl;
	Cat c1;
	Cat c2 = c1;
	for (int i = 0; i < 5; ++i)
	{
		c1.getb()->setidea("idea");
		c2.getb()->setidea("idea 2");
	}
	c1.getb()->getidea();
	c2.getb()->getidea();

    for (int i = 0; i < 6; ++i)
	{
		if (i % 2 == 0)
			delete Animal[i];
		else
			delete Animal[i];
	}
}

void func()
{

    Cat c;
    c.getb()->setidea("********idea 1");
    c.getb()->setidea("********idea 2");
    Cat x(c);
    c.getb()->setidea("********idea 3");
    std::cout << "cat 1 : \n" ;c.getb()->getidea();
    std::cout << "cat 2 : \n" ;x.getb()->getidea();

    Dog e;
    e.getb()->setidea("********idea 1");
    e.getb()->setidea("********idea 2");
    Dog r(e);
    e.getb()->setidea("********idea 3");
    std::cout << "dog 1 : \n" ;e.getb()->getidea();
    std::cout << "dog 2 : \n" ;r.getb()->getidea();

}

int main()
{
    func();
    //func2();
    //while (1);
    
    return 0;
}