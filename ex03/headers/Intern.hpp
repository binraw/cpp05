#ifndef INTERN_HPP
# define INTERN_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "colors.hpp"


class Intern
{
private:

public:
/*----------- CONSTRUCTOR / DESTRUCTOR --------------*/
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();
    
/*-------------- FONCTIONS --------------------------*/
    AForm *makeForm(std::string name, std::string target);

};




#endif
