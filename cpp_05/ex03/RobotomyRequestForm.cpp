#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
   
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm &src) : Form(src)
{
    this->target = src.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    this->target = src.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}



void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if ( this->getSigned() != true )
        throw Form::NotSignedException();
    else if ( executor.getGrade() > this->getGrade_e() ) 
        throw Form::GradeTooLowException();
    else {
        static int  i;
        if ( i % 2 == 0 )
            std::cout << "BZZZZZT! " << target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << target << " is still alive." << std::endl;
        i++;
    }
}
