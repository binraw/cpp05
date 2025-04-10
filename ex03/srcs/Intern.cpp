#include "../headers/Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor Intern called" << std::endl;
}

/*----------------------------------------------------*/

Intern::Intern(const Intern &other)
{
    *this = other;   
}
/*----------------------------------------------------*/

Intern &Intern::operator=(const Intern &other)
{
    return *this;
}
/*----------------------------------------------------*/


Intern::~Intern()
{
    std::cout << "Destructor Inter called" << std::endl;
}


/*-------------- FONCTIONS --------------------------*/

static AForm *makeFormPresidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}
/*----------------------------------------------------*/

static AForm *makeFormRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}
/*----------------------------------------------------*/

static AForm *makeFormShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}
/*----------------------------------------------------*/

AForm *Intern::makeForm(std::string name_form, std::string target_form)
{
    AForm *(*all_forms[])(const std::string target) = {&makeFormPresidential, &makeFormRobotomy, &makeFormShrubbery};
    std::string names[] = {"presidential", "robotomy request", "shrubbery"};
    for (int i = 0; i < 3; i++)
    {
	    if (name_form == names[i])
	    {
		    std::cout << GREEN << "Intern creates " << names[i] << " now" << RESET << std::endl;
		    return (all_forms[i](target_form));
	    }
    }
    std::cout << RED << "Intern: Unknown form type '" << name_form << "'." << RESET << std::endl;
	return (NULL);
}

