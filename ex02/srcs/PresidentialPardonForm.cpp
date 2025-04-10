#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "default_target")
{
     std::cout << "Default constructor Presidential Pardon Form called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardonForm", 25, 5, t)
{
    std::cout << getTarget() << " Constructor Presidential Pardon Form called" << std::endl;
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
    std::cout << getTarget() << " Destructor Presidential Pardon Form called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > this->_grade_exec)
	    throw Bureaucrat::GradeTooLowException();	
    else if (this->_sign)
        throw AForm::FormSignTrue();
    else
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
