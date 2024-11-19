#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5)
{
     std::cout << "Default constructor Presidential Pardon Form called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string n) : AForm(n, 25, 5)
{
    std::cout << "Constructor Presidential Pardon Form called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor Presidential Pardon Form called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat &executor)const
{
    if (executor.getGrade() > this->grade_exec)
	{
	    throw Bureaucrat::GradeTooLowException();	
	}
	else if (this->sign)
        throw AForm::FormSignTrue();
    else
        std::cout << getName() << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}