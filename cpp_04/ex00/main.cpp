/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:57:21 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/13 16:09:12 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void func()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* s = new WrongCat();
    
    std::cout << j->getType() << " dog" << std::endl;
    std::cout << i->getType() << " cat" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    s->makeSound();
    // // ...

    delete meta;
    delete j;
    delete i;
    delete s;
}

int main()
{
    func();
    //while(1);
}