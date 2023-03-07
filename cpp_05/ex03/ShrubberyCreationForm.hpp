#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <string>
#include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;

public:
    ShrubberyCreationForm();    
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm( ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    ~ShrubberyCreationForm();

    std::string const &getTarget() const;

    virtual void execute(Bureaucrat const &executor) const;
};

#endif
