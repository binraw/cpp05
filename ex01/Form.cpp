#include "Form.hpp"

Form::Form() : name("paperwork"), grade_exec(150), grade_sign(150) 
{
	this->sign = false;
}
Form::Form(std::string const name, int const nb_a, int const nb_b) : name(name), grade_exec(nb_a), grade_sign(nb_b) 
{
	this->sign = false;
}
Form::Form(const Form &other) : name(other.name), grade_exec(other.grade_exec), grade_sign(other.grade_sign), sign(other.sign)
{
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->sign = other.sign;
	}
	return *this;
}
Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "The form grade is too low";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "The form grade is too high";
}

std::string Form::getName(void) const
{
	return this->name;
}

int Form::getGradeExec(void) const
{
	return this->grade_exec;
}

int Form::getGradeSign(void) const
{
	return this->grade_sign;
}
bool Form::getStatus(void) const
{
	return this->sign;
}

void Form::changeStatus(void)
{
	this->sign = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << form.getName() << ", form grade exec : " << form.getGradeExec() << 
		" and grade sign : " << form.getGradeSign() << "this status :" << form.getStatus(); 
    return os; 
}

void Form::beSigned(Bureaucrat &bob)
{
	if (this->grade_sign >= bob.getGrade())
	{
		this->sign = true;
		std::cout << bob.getName() << "signed" << Form::getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}
