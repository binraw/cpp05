#ifndef AForm_HPP
# define AForm_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat; 
class AForm {
public:
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	std::string getName(void) const;
	int getGradeExec(void) const;
	int getGradeSign(void) const;
	bool getStatus(void) const;
	void beSigned(Bureaucrat &bob);
	void changeStatus(void);
	void execute(Bureaucrat const &executor);
	~AForm();
class GradeTooLowException: public std::exception
	{
		virtual const char*	what() const throw();
	};

class GradeTooHighException: public std::exception
	{
		virtual const char*	what() const throw();
	};
class FormSignTrue: public std::exception
{
	virtual const char* what() const throw();
};

protected:
	std::string const name;
	int const grade_exec;
	int const grade_sign;
	bool sign;

	AForm();
	AForm(std::string const name, int const nb_a, int const nb_b); 
};



#endif
