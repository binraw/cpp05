#include "Bureaucrat.hpp"

/*----------- CONSTRUCTOR / DESTRUCTOR --------------*/

Bureaucrat::Bureaucrat() :name("default bureaucrat")
{
	this->grade = 75;
}
/*----------------------------------------------------*/

Bureaucrat::Bureaucrat(std::string name, int nb) : name(name)
{
	if (nb < 1)
		throw GradeTooHighException();
	else if (nb > 150)
		throw GradeTooLowException();
	else
		this->grade = nb;
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
		this->grade = other.grade;
	return *this;
}
/*----------------------------------------------------*/

Bureaucrat::~Bureaucrat() {
}

/*------------ GETTER -------------------------------*/
std::string Bureaucrat::getName(void) const
{
	return this->name;
}
/*----------------------------------------------------*/

int Bureaucrat::getGrade(void) const
{
	return this->grade;
}

/*-------------- FONCTIONS --------------------------*/
void Bureaucrat::incrementGrade(void)
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->grade -= 1;
}
/*----------------------------------------------------*/

void Bureaucrat::decrementGrade(void)
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->grade += 1;
}
/*----------------------------------------------------*/

void Bureaucrat::signForm(Form &paper)
{
	if (this->grade <= paper.getGradeSign() && paper.getStatus() == false)
	{
		paper.beSigned(this);
	}
	else if (paper.getStatus() == true)
		std::cout << getName() << " couldn't sign " << paper.getName() << " because is already signed." << std::endl;
	else
		std::cout << getName() << " couldn't sign " << paper.getName() << " because form too high." << std::endl;
}

/*------------------ EXCEPTIONS-----------------------*/
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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureau)
{
    os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade(); 
    return os; 
}


