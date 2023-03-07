
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form( "PresidentialPardonForm", 25, 5 ), target( target ) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& cpy) :
Form( cpy ), target( cpy.target ) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    this->target = rhs.target;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    std::cout << "PresidentialPardonForm execute\n" ;

    if ( this->getSigned() != true )
        throw Form::NotSignedException();
    if ( executor.getGrade() > this->getGrade_e() ) 
        throw Form::GradeTooLowException();
    else
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}