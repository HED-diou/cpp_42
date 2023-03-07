#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool    is_signed;
        const int grade_s;
        const int grade_e;
    public:
        Form();
        Form(Form const &copy);
        Form(const std::string name , const int grade_s , const int grade_e);
        ~Form();
        Form &operator=(Form const &obj);
        std::string getName() const;
        bool getSigned() const;
        int getGrade_s() const;
        int getGrade_e() const;
        void beSigned(Bureaucrat& b);
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

std::ostream& operator<<(std::ostream& sys, Form& obj);


#endif