#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): name("default"), grade_sign(72), grade_exec(45)
{
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : name(target), grade_sign(72), grade_exec(45)
{

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
}