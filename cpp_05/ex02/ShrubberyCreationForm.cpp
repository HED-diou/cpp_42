#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : 
Form("ShrubberyCreationForm", 145, 137), _target("file")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
Form(target, 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm &cpy) : 
Form(cpy), _target(cpy._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    _target = rhs._target;
    return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    std::cout << "ShrubberyCreationForm execute\n" ;
    if ( this->getSigned() != true )
        throw Form::NotSignedException();
    else if ( executor.getGrade() > this->getGrade_e() ) 
        throw Form::GradeTooLowException();
    
    std::string f =  this->getName() + "_shrubbery";
    std::ofstream file( f.c_str() );
        // file.open(filePath);
        // Écriture dans le fichier
    file << "          __" << std::endl;
    file << "         /  \\" << std::endl;
    file << "        /    \\" << std::endl;
    file << "       /      \\" << std::endl;
    file << "      /        \\" << std::endl;
    file << "     /          \\" << std::endl;
    file << "    /            \\" << std::endl;
    file << "   /              \\" << std::endl;
    file << "  /                \\" << std::endl;
    file << " /                  \\" << std::endl;
    file << "----------------------" << std::endl;
    file << "         |__|" << std::endl;
        // Fermeture du fichier
        file.close();
}
