#include "../headers/Intern.hpp"

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

static AForm *makeFormPresidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}

static AForm *makeFormRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

static AForm *makeFormShruberry(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string name_form, std::string target_form)
{
    AForm *(*all_forms[])(const std::string target) = {&makeFormPresidential, &makeFormRobotomy, &makeFormShruberry};
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
	return (NULL);
}

