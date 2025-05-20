#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "default_target")
{
    std::cout << "Default constructor Shruberry called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << getTarget() << " Constructor Shruberry called" << std::endl;
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
    std::cout << getTarget() << " Destructor Shruberry called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > this->_grade_exec)
	{
	    throw Bureaucrat::GradeTooLowException();	
	}
    else 
    {
        std::ofstream file ( this->_target + "_shrubbery");
        if(!file)
            std::cout << "Error file" << std::endl;
        file << "    0    " << std::endl;
        file << "   ***   " << std::endl;
        file << "  *****  " << std::endl;
        file << " ******* " << std::endl;
        file << "    1    " << std::endl;
        file.close();
    }
}
