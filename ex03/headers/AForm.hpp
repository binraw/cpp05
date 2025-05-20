#ifndef AForm_HPP
# define AForm_HPP


#include <string>
#include <iostream>
#include "./Bureaucrat.hpp"


class Bureaucrat; 
class AForm {
public:
/*----------- CONSTRUCTOR / DESTRUCTOR --------------*/
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();
/*------------ GETTER -------------------------------*/
	std::string getName(void) const;
	std::string getTarget(void) const;
	int getGradeExec(void) const;
	int getGradeSign(void) const;
	bool getStatus(void) const;
/*-------------- FONCTIONS --------------------------*/
	void beSigned(Bureaucrat &bob);
	void changeStatus(void);
	virtual	void execute(Bureaucrat const &executor) = 0;

/*------------------ EXCEPTIONS-----------------------*/
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
/*______________ PRIVATE VALUES______________________*/
	std::string const _name;
	std::string const _target;
	int const _grade_exec;
	int const _grade_sign;
	bool _sign;
/*________________ PRIVATE CONSTRUCTOR _______________*/
	AForm();
	AForm(std::string const name, int const nb_a, int const nb_b, std::string const target); 


};
std::ostream &operator<<(std::ostream &os, const AForm &AForm);

#endif
