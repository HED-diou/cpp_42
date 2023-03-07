#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("default_name_form"), grade_s(1), grade_e(2)
{
    this->is_signed = 0;
}

Form::Form(const std::string name , const int grade_s , const int grade_e): name(name), grade_s(grade_s), grade_e(grade_e)
{
    //exeptions
    this->is_signed = 0;

}

Form::Form(Form &copy): name(copy.name), grade_s(copy.grade_s), grade_e(copy.grade_e)
{
    this->is_signed = copy.is_signed;
}

Form::~Form(){}

std::string Form::getName() const
{
    return this->name;
}
bool         Form::getSigned() const
{
    return this->is_signed;
}
int         Form::getGrade_s() const
{
    return this->grade_s;
}
int         Form::getGrade_e() const
{
    return this->grade_e;
}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
    {
        std::cout << "Form asignement operator called" << std::endl;
        // this->name = obj.name;
        this->is_signed = obj.is_signed;
        // this->grade_s = obj.grade_s;
        // this->grade_e = obj.grade_e;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& sys, Form& obj)
{
    std::string a;

    if (obj.getSigned())
        a = "signed";
    else
        a = "unsigned";
    sys << obj.getName() << " is " << a << ", to signe you need " << obj.getGrade_s()<< ", to execute you need "<< obj.getGrade_e();
    return (sys);
}

void    Form::beSigned(Bureaucrat& b)
{
    try
    {
        if (b.getGrade() >= this->grade_s )
            throw GradeTooLowException();
        this->is_signed = 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cout << b.getName() << " couldn’t sign " << this->getName() << " low grade " << std::endl;
    }
    
}

const char * Form::GradeTooLowException::what () const throw()
{
    return "GradeTooLowException";
}
const char *Form::GradeTooHighException::what () const throw() 
{
    return "GradeTooHighException";
}
const char *Form::NotSignedException::what () const throw()
{
    return "NotSignedException";
}

void Form::execute(const Bureaucrat& executor) const
{
    if (this->is_signed == true) 
    {
        throw Form::NotSignedException();
    }
    if (executor.getGrade() > this->getGrade_e())
    {
        throw Form::GradeTooLowException();
    }
}

