

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{

    Intern intern;
    Bureaucrat bureaucrat("Bob", 1);
        
    Form* form;
    std::cout << "\n-------------------------------\n" << std::endl;
    form = intern.makeForm("robotomy request", "Bender");
    if (form != 0)
    {
        std::cout << "Form name: " << form->getName() << std::endl;
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }
    std::cout << "\n-------------------------------\n" << std::endl;
    form = intern.makeForm("presidential pardon", "John Doe");
    if (form != 0)
    {
        std::cout << "Form name: " << form->getName() << std::endl;
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }
    std::cout << "\n-------------------------------\n" << std::endl;
    form = intern.makeForm("shrubbery creation", "Jane Doe");
    if (form != 0)
    {
        std::cout << "Form name: " << form->getName() << std::endl;
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }
    std::cout << "\n-------------------------------\n" << std::endl;
    form = intern.makeForm("unknown form", "Jane Do");
    if (form != 0)
    {
        std::cout << "Form name: " << form->getName() << std::endl;
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }

}
