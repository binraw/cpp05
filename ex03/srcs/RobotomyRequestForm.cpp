#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/colors.hpp"

static int robotomied_success = 0;
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45, "RobotomyRequestForm_default")
{
    std::cout << "Default constructor Robot called" << std::endl;
}
/*----------------------------------------------------*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
    std::cout << getTarget() << " Constructor Robot called" << std::endl;
}
/*----------------------------------------------------*/

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    *this = other;
}
/*----------------------------------------------------*/

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    return *this;
}
/*----------------------------------------------------*/


RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << getTarget() << " Destructor Robot called" << std::endl;
}

/*-------------- FONCTIONS --------------------------*/
void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > this->_grade_exec)
	{
	    throw Bureaucrat::GradeTooLowException();	
	}
    else if (this->_sign)
        throw AForm::FormSignTrue();
    else if (robotomied_success++ % 2)
		std::cout << BRIGHT_GREEN << getTarget() << " BRRRRRRRRRRRRRR " <<  " was robotomized" << RESET << std::endl;
    else
		std::cout << BRIGHT_GREEN << getTarget() << " Robotomy failed" << RESET << std::endl;
	
}
