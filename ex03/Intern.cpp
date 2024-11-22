#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor Intern called" << std::endl;
}


Intern::Intern(const Intern &other)
{
    *this = other;   
}
Intern &Intern::operator=(const Intern &other)
{
    return *this;
}


Intern::~Intern()
{
    std::cout << "Destructor Inter called" << std::endl;
}

// void Intern::makeForm(std::string name, std::string target)
// {
    
// }

void Intern::makeFormPresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

void Intern::makeFormRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

void Intern::makeFormShruberry(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string name_form, std::string target_form)
{
    Form *(*all_forms[])(const std::string target) = {&makeFormPresidential, &makeFormRobotomy, &makeFormShruberry};
    std::string names[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShruberryCreationForm"};
    for (int i = 0; i < 3; i++)
    {
	    if (name_form == names[i])
	    {
		    std::cout << "Intern creates " << name_form << " now" << std::endl;
		    return (all_forms[i](target_form));
	    }
    }
    std::cout << "Intern creates" << name_form << std::endl;
}