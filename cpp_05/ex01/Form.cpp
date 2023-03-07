#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("default_name_form"), grade_s(10), grade_e(20)
{
    this->is_signed = 0;
}

Form::Form(const std::string name , const int grade_s , const int grade_e): name(name), grade_s(grade_s), grade_e(grade_e)
{
    //exeptions
    this->is_signed = 0;

}

Form::Form(Form const &copy): name(copy.name), grade_s(copy.grade_s), grade_e(copy.grade_e)
{
    this->is_signed = copy.is_signed;
}

Form &Form::operator=(Form const &copy) 
{
    ç
    this->is_signed = copy.is_signed;
    //this->name = copy.name;
    // this->grade_e = copy.grade_e;
    // this->grade_s = copy.grade_s;
    return *this;
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

const char *Form::GradeTooHighException::what() const throw()
{
    return "Error: Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Error: Grade too low";
}