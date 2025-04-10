#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat 
{
public:
/*----------- CONSTRUCTOR / DESTRUCTOR --------------*/
	Bureaucrat();
	Bureaucrat(std::string name, int nb);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
/*------------ GETTER -------------------------------*/
	std::string getName(void) const;
	int getGrade(void) const;
/*-------------- FONCTIONS --------------------------*/
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &paper);
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
	std::string const name;
	int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureau);


#endif
