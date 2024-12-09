#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
  
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    void execute(Bureaucrat const &executor);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();
};




#endif
