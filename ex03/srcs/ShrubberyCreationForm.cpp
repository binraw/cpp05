#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137), _target("default")
{
    std::cout << "Default constructor Shruberry called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137), _target(target)
{
    std::cout << "Constructor Shruberry called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    *this = other;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor Shruberry called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > this->grade_exec)
	{
	    throw Bureaucrat::GradeTooLowException();	
	}
	else if (this->sign)
        throw AForm::FormSignTrue();
    else 
    {
        std::ofstream file ( this->name + "_shrubbery");
        if(!file)
            std::cerr << "Error file" << std::endl;
        file << "    0    " << std::endl;
        file << "   ***   " << std::endl;
        file << "  *****  " << std::endl;
        file << " ******* " << std::endl;
        file << "    1    " << std::endl;
        file.close();
    }
}
