/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:09:17 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/15 14:09:17 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "cast.h"


class Base {
public:
    virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate() {
    int r = rand() % 3;
    if (r == 0) 
        return new A();
    if (r == 1) 
        return new B();
    return new C();
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try 
    {
        A* a = dynamic_cast<A*>(&p);
        if (a) {
            std::cout << "A" << std::endl;
            return;
        }
        B* b = dynamic_cast<B*>(&p);
        if (b) {
            std::cout << "B" << std::endl;
            return;
        }
        C* c = dynamic_cast<C*>(&p);
        if (c) {
            std::cout << "C" << std::endl;
            return;
        }
    }
    catch (std::bad_cast& e) 
    {
        std::cout << "Error: dynamic_cast failed" << std::endl;
    }
}

int main() {
    srand(time(0));
    Base* b1 = generate();
    Base& b2 = *b1;
    identify(b1);
    identify(b2);
    delete b1;
    return 0;
}
