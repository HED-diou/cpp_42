#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    Bureaucrat a("B1",1);
    Bureaucrat b("B2", 148);
    std::cout << "\n***************************\n" << std::endl;

    std::cout << b << std::endl;
    std::cout << a << std::endl;

    std::cout << "\n***************************\n" << std::endl;
    Form f("F1", 10, 5);

    std::cout << b << std::endl;
    std::cout << f << std::endl;
    f.beSigned(b);
    std::cout << f << std::endl;
    std::cout << "\n***************************\n" << std::endl;
    Form f2;
    std::cout << a << std::endl;
    std::cout << f2 << std::endl;
    a.signForm(f2);
    std::cout << f2 << std::endl;

    std::cout << "\n***************************\n" << std::endl;

}