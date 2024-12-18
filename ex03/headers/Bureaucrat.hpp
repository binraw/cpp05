#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
class AForm;

class Bureaucrat 
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int nb);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	void signAForm(AForm &paper);
	void executeForm(AForm& form) const;
class GradeTooLowException: public std::exception
	{
		virtual const char*	what() const throw();
	};

class GradeTooHighException: public std::exception
	{
		virtual const char*	what() const throw();
	};
private:
	std::string const name;
	int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureau);


#endif
