#include "../headers/RobotomyRequestForm.hpp"

static int robotomied_success = 0;
RobotomyRequestForm::RobotomyRequestForm(): AForm("default", 72, 45)
{
    std::cout << "Default constructor Robot called" << std::endl;
//     std::cout << "* Makes some drilling noises * " << getName() << " has been robotomized successfully" << std::endl; 
//     std::cout << "* Makes some drilling noises * " << getName() << " the robotomy failed." << std::endl; 
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
    std::cout << "Constructor Robot called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    return *this;
}



RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor Robot called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > this->grade_exec)
	{
	    throw Bureaucrat::GradeTooLowException();	
	}
	else if (this->sign)
        throw AForm::FormSignTrue();
    else if (robotomied_success++ % 2)
		std::cout << "BRRRRRRRRRRRRRR\n" <<  " was robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
	
}
