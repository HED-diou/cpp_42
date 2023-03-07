#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("B1",145);
    Bureaucrat a("B2", 4);

    std::cout << a.getGrade() << std::endl;
    a.addgrade();
    std::cout << a.getGrade() << std::endl;
    a.addgrade();
    std::cout << a.getGrade() << std::endl;
    a.addgrade();
    std::cout << a.getGrade() << std::endl;
    a.addgrade();
    std::cout << a.getGrade() << std::endl;
    a.addgrade();
    std::cout << a.getGrade() << std::endl;
    std::cout << a << std::endl;

    std::cout << "****************************" << std::endl;
    std::cout << b.getGrade() << std::endl;
    std::cout << b << std::endl;
    --b;
    std::cout << b.getGrade() << std::endl;
    --b;
    std::cout << b.getGrade() << std::endl;
    --b;
    std::cout << b.getGrade() << std::endl;
    --b;
    std::cout << b.getGrade() << std::endl;
    --b;
    std::cout << b.getGrade() << std::endl;
    --b;
    std::cout << b.getGrade() << std::endl;
    --b;
    std::cout << b << std::endl;
}