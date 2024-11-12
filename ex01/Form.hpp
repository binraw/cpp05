#ifndef FORM_HPP
# define FORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat; 
class Form {
public:
	Form();
	Form(std::string const name, int const nb_a, int const nb_b); 
	Form(const Form &other);
	Form &operator=(const Form &other);
	std::string getName(void) const;
	int getGradeExec(void) const;
	int getGradeSign(void) const;
	bool getStatus(void) const;
	void beSigned(Bureaucrat &bob);
	void changeStatus(void);
	~Form();
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
	int const grade_exec;
	int const grade_sign;
	bool sign;	
};



#endif
