

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"




int main( void )
{
        std::cout << "\n---------------  ---------------\n" << std::endl;
        Bureaucrat bureaucrat("B1", 1);
        Bureaucrat b("B2", 1);
        ShrubberyCreationForm form1("hed");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------\n" << std::endl;
        b.signForm(form1);
        b.signForm(form1);
        bureaucrat.executeForm(form1);
        bureaucrat.executeForm(form1);

        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------\n" << std::endl;
        b.signForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        std::cout << "\n--------------- Form 3 ( President ) ---------------\n" << std::endl;
        b.signForm(form3);
        b.signForm(form3);
        bureaucrat.executeForm(form3);
        bureaucrat.executeForm(form3);

    std::cout << "\n---------------  ---------------\n" << std::endl;
    return 0;
}