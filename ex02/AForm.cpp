#include "AForm.hpp"

AForm::AForm() : name("paperwork"), grade_exec(150), grade_sign(150) 
{
	this->sign = false;
}
AForm::AForm(std::string const name, int const nb_a, int const nb_b) : name(name), grade_exec(nb_a), grade_sign(nb_b) 
{
	this->sign = false;
}
AForm::AForm(const AForm &other) : name(other.name), grade_exec(other.grade_exec), grade_sign(other.grade_sign), sign(other.sign)
{
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->sign = other.sign;
	}
	return *this;
}
AForm::~AForm()
{
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "The AForm grade is too low";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "The AForm grade is too high";
}

const char* AForm::FormSignTrue::what() const throw()
{
	return "This Form is already signed";
}

std::string AForm::getName(void) const
{
	return this->name;
}

int AForm::getGradeExec(void) const
{
	return this->grade_exec;
}

int AForm::getGradeSign(void) const
{
	return this->grade_sign;
}
bool AForm::getStatus(void) const
{
	return this->sign;
}

void AForm::changeStatus(void)
{
	this->sign = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
    os << AForm.getName() << ", AForm grade exec : " << AForm.getGradeExec() << 
		" and grade sign : " << AForm.getGradeSign() << "this status :" << AForm.getStatus(); 
    return os; 
}

void AForm::beSigned(Bureaucrat &bob)
{
	if (this->grade_sign >= bob.getGrade())
	{
		this->sign = true;
		std::cout << bob.getName() << "signed" << AForm::getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}
void AForm::execute(Bureaucrat const &executor)
{
	(void)executor;
	// if (executor.getGrade() > this->grade_exec)
	// {
	// 	throw Bureaucrat::GradeTooLowException();	
	// }
	// if (this->sign)
	// 	std::cout << executor.getName() << " couldn't sign " << getName() << " because is already signed." << std::endl;
	


}
