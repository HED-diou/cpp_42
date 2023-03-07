
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat &copy);
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &copy);
        std::string getName() const;
        int getGrade() const;
        Bureaucrat&	operator++();
	    Bureaucrat&	operator--();
        void    signForm(Form &form);
        void        executeForm( const Form& form ) const;
        // void addgrade();
        // void downgrade();
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char  *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char  *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &sys, Bureaucrat& obj);

#endif