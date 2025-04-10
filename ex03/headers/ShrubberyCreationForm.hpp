#ifndef SHUBBERYCREATIONFORM_HPP
# define SHUBBERYCREATIONFORM_HPP


#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
/*----------- CONSTRUCTOR / DESTRUCTOR --------------*/
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
/*-------------- FONCTIONS --------------------------*/
    void execute(Bureaucrat const &executor);
private:
	ShrubberyCreationForm();
};




#endif
