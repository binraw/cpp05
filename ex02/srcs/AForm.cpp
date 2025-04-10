#include "../headers/AForm.hpp"

/*----------- CONSTRUCTOR / DESTRUCTOR --------------*/

AForm::AForm() : _name("paperwork"), _grade_exec(150), _grade_sign(150), _target("default") 
{
	this->_sign = false;
}
/*----------------------------------------------------*/
AForm::AForm(std::string const name, int const nb_a, int const nb_b, std::string const target) : _name(name), _grade_exec(nb_a), _grade_sign(nb_b), _target(target)
{
	this->_sign = false;
}
/*----------------------------------------------------*/
AForm::AForm(const AForm &other) : _name(other._name), _grade_exec(other._grade_exec), _grade_sign(other._grade_sign), _sign(other._sign), _target(other._target)
{
}
/*----------------------------------------------------*/

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->_sign = other._sign;
	}
	return *this;
}
/*----------------------------------------------------*/

AForm::~AForm()
{
}
/*----------------------------------------------------*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return "The AForm grade is too low";
}
/*----------------------------------------------------*/

const char* AForm::GradeTooLowException::what() const throw()
{
	return "The AForm grade is too high";
}
/*----------------------------------------------------*/

const char* AForm::FormSignTrue::what() const throw()
{
	return "This Form is already signed";
}


/*------------ GETTER -------------------------------*/

std::string AForm::getName(void) const
{
	return this->_name;
}
/*----------------------------------------------------*/

std::string AForm::getTarget(void) const
{
	return this->_target;
}
/*----------------------------------------------------*/

int AForm::getGradeExec(void) const
{
	return this->_grade_exec;
}
/*----------------------------------------------------*/

int AForm::getGradeSign(void) const
{
	return this->_grade_sign;
}
/*----------------------------------------------------*/
bool AForm::getStatus(void) const
{
	return this->_sign;
}


/*-------------- FONCTIONS --------------------------*/

void AForm::changeStatus(void)
{
	this->_sign = true;
}
/*----------------------------------------------------*/

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
    os << AForm.getName() << ", AForm grade exec : " << AForm.getGradeExec() << 
		" and grade sign : " << AForm.getGradeSign() << "this status :" << AForm.getStatus(); 
    return os; 
}
/*----------------------------------------------------*/

void AForm::beSigned(Bureaucrat &bob)
{
	if (this->_grade_sign >= bob.getGrade())
	{
		this->_sign = true;
		std::cout << bob.getName() << "signed" << AForm::getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}
/*----------------------------------------------------*/

void AForm::execute(Bureaucrat const &)
{
}
