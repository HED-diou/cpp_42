/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:57:21 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/13 16:21:15 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


// int main()
// {
// 	Animal *Animal[6];

// 	Animal p;
// 	p->makeSound();
// 	for (int i = 0; i < 6; ++i)
// 	{
// 		if (i % 2 == 0)
// 			Animal[i] = new Cat();
// 		else
// 			Animal[i] = new Dog();
// 		Animal[i]->makeSound();
// 	}

//  	std::cout << "------------------------------" << std::endl;
// 	Cat c1;
// 	Cat c2 = c1;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		c1.getb()->setidea("idea");
// 		c2.getb()->setidea("idea 2");
// 	}
// 	c1.getb()->getidea();
// 	c2.getb()->getidea();
// }

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const WrongAnimal* s = new WrongCat();

	// //  Animal a;

	// // a.makeSound();
    
    // std::cout << j->getType() << " 1" << std::endl;
    // std::cout << i->getType() << " 2" << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // s->makeSound();

    Cat c;
    c.getb()->setidea("nyan nyan");
    c.getb()->setidea("hhhh");
    Cat x(c);
    c.getb()->getidea();
    x.getb()->getidea();

    

    // delete meta;
    // delete j;
    // delete i;
    // delete s;
    return 0;
}