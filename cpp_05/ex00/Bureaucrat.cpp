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
            throw   GradeTooHighException();
        if (grade > 150)
            throw GradeTooLowException();
        this->grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        this->grade = 1;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)  : name(copy.name)
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
        if (this->grade == 0)
            throw   GradeTooLowException();
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

void Bureaucrat::addgrade()
{
    try
    {
        if (this->grade == 1)
            throw   GradeTooLowException();
       this->grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
void Bureaucrat::downgrade()
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
}

std::ostream &operator<<(std::ostream &sys, Bureaucrat& obj)
{
    sys << obj.getName()<< ", bureaucrat grade is " << obj.getGrade();
    return sys;
}