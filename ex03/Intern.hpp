#ifndef INTERN_HPP
# define INTERN_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
private:

public:
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    void makeForm(std::string name, std::string target);
    void makeFormPresidential(std::string target);
    void makeFormRobotomy(std::string target);
    void makeFormShruberry(std::string target);
    ~Intern();
};




#endif