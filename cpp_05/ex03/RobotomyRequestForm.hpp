#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
     std::string   target;

    RobotomyRequestForm();

public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm( RobotomyRequestForm &src);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
    ~RobotomyRequestForm();

    void        execute( const Bureaucrat& executor ) const;
};

#endif 