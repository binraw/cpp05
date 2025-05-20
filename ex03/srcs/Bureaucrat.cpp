#include "../headers/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default bureaucrat")
{
	this->_grade = 75;
}
/*----------------------------------------------------*/

Bureaucrat::Bureaucrat(std::string name, int nb) : _name(name)
{
	if (nb < 1)
		throw GradeTooHighException();
	else if (nb > 150)
		throw GradeTooLowException();
	else
	{
		this->_grade = nb;
	}
}
/*----------------------------------------------------*/

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}
/*----------------------------------------------------*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return *this;
}
/*----------------------------------------------------*/

Bureaucrat::~Bureaucrat() {
}
/*----------------------------------------------------*/

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureau)
{
    os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade(); 
    return os; 
}

/*------------ GETTER -------------------------------*/
std::string Bureaucrat::getName(void) const
{
	return this->_name;
}
/*----------------------------------------------------*/

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}


/*-------------- FONCTIONS --------------------------*/

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade -= 1;
}
/*----------------------------------------------------*/
void Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade += 1;
}
/*----------------------------------------------------*/

const char*	Bureaucrat::GradeTooLowException::what() const throw() 
{
	return "Bureaucrat grade too low!";
}
/*----------------------------------------------------*/

const char*	Bureaucrat::GradeTooHighException::what() const throw() 
{
	return "Bureaucrat grade too high!";
}

/*----------------------------------------------------*/

void Bureaucrat::signAForm(AForm &paper)
{
	if (this->_grade <= paper.getGradeSign() && paper.getStatus() == false)
	{
		paper.beSigned(this);
	}
	else if (paper.getStatus() == true)
		std::cout << getName() << " couldn't sign " << paper.getName() << " because is already signed." << std::endl;
	else
		std::cout << getName() << " couldn't sign " << paper.getName() << " because AForm too high." << std::endl;
}
/*----------------------------------------------------*/

void	Bureaucrat::executeForm(AForm& form) const 
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getTarget() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << _name << " cannot execute " << form.getTarget() << " because "
					<< e.what() << std::endl;
	}
}


