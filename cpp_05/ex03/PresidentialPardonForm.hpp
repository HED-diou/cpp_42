#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;

    // PresidentialPardonForm();

public:
    PresidentialPardonForm( const std::string& target );
    PresidentialPardonForm( PresidentialPardonForm& src );
    ~PresidentialPardonForm();

    PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
    
    void execute( const Bureaucrat& executor ) const;
};

#endif 