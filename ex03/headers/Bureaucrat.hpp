#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
class AForm;

class Bureaucrat 
{
public:
/*----------- CONSTRUCTOR / DESTRUCTOR --------------*/
	Bureaucrat();
	Bureaucrat(std::string name, int nb);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &other);
/*------------ GETTER -------------------------------*/
	std::string getName(void) const;
	int getGrade(void) const;
/*-------------- FONCTIONS --------------------------*/
	void incrementGrade(void);
	void decrementGrade(void);
	void signAForm(AForm &paper);
	void executeForm(AForm& form) const;

/*------------------ EXCEPTIONS-----------------------*/
class GradeTooLowException: public std::exception
	{
		virtual const char*	what() const throw();
	};

class GradeTooHighException: public std::exception
	{
		virtual const char*	what() const throw();
	};
private:
/*______________ PRIVATE VALUES______________________*/
	std::string const _name;
	int _grade;

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureau);


#endif
