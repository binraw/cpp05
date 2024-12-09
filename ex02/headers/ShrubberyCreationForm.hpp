#ifndef SHUBBERYCREATIONFORM_HPP
# define SHUBBERYCREATIONFORM_HPP


#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string _target;
	ShrubberyCreationForm();
public:
    
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    void execute(Bureaucrat const &executor);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
};




#endif
