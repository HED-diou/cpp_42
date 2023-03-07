//Bureaucrat.cpp

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("name")
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    this->grade = 1;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    std::cout << "Bureaucrat parametric constructor called" << std::endl;
    try
    {
        if (grade < 1)
            throw   GradeTooLowException();
        if (grade > 150)
            throw GradeTooHighException();
        this->grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        this->grade = 1;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)  : name(copy.name)
{
    std::cout << "Bureaucrat copy construtor called" << std::endl;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat asignement operator called" << std::endl;
    this->grade = copy.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat deconstractor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat&	Bureaucrat::operator--()
{
    try
    {
        if (this->grade == 150)
            throw   GradeTooLowException();
       this->grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (*this);
}
Bureaucrat&	Bureaucrat::operator++()
{
    try
    {
        if (this->grade == 1)
            throw   GradeTooHighException();
       this->grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error: Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error: Grade too low";
}


void    Bureaucrat::signForm(Form &form)
{
    try
    {
        if (getGrade() <= form.getGrade_s())
        {
            form.beSigned(*this);
            std::cout << this->getName() << " singned by "<< form.getName() << std::endl;
        }
        else
            throw   GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " low grade " << std::endl;
    }
}

void    Bureaucrat::executeForm( const Form& form ) const 
{
    try 
    {
        form.execute( *this );
    }
    catch (const std::exception& e ) 
    {
        std::cerr << e.what() << std::endl;
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

// void Bureaucrat::addgrade()
// {
//     this->grade++;
// }
// void Bureaucrat::downgrade()
// {
//     this->grade--;
// }

std::ostream &operator<<(std::ostream &sys, Bureaucrat& obj)
{
    sys << obj.getGrade() << " bureaucrat grade is " << obj.getGrade();
    return sys;
}



