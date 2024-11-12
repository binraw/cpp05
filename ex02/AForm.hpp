#ifndef AForm_HPP
# define AForm_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat; 
class AForm {
public:
	AForm();
	AForm(std::string const name, int const nb_a, int const nb_b); 
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	std::string getName(void) const;
	virtual int getGradeExec(void) const = 0;
	virtual int getGradeSign(void) const = 0;
	virtual bool getStatus(void) const = 0;
	virtual void beSigned(Bureaucrat &bob) = 0;
	virtual void changeStatus(void) = 0;
	~AForm();
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
