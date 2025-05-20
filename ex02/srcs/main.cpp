#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/colors.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat a("Bart", 23);


	std::cout << GREEN << "TEST SUCCESS -->>" << RESET << std::endl;
	try
	{
		ShrubberyCreationForm sapin("Noel");
		a.executeForm(sapin);
		// sapin.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cout << BRIGHT_RED	 << e.what() << RESET << '\n';
	}
	try
	{
		PresidentialPardonForm document("CONFIDENTIAL");
		a.executeForm(document);
	}
	catch(const std::exception& e)
	{
		std::cout << BRIGHT_RED	 << e.what() << RESET << '\n';
	}
	
	try
	{
		RobotomyRequestForm project("SPACE_X");
		a.executeForm(project);

		std::cout << "Execute robot Again :" << std::endl;
		a.executeForm(project);

	}
	catch(const std::exception& e)
	{
		std::cout << BRIGHT_RED	 << e.what() << RESET << '\n';
	}

	std::cout << RED << "TEST FAILED -->>" << RESET << std::endl;


	Bureaucrat c("Marc", 150);


	try
	{
		ShrubberyCreationForm big_tree("BIGGEST");
		c.executeForm(big_tree);

	}
	catch(const std::exception& e)
	{
		std::cout << BRIGHT_RED	 << e.what() << RESET << '\n';
	}
	try
	{
		PresidentialPardonForm conf("BOMBE");
		c.executeForm(conf);
	}
	catch(const std::exception& e)
	{
		std::cout << BRIGHT_RED	 << e.what() << RESET << '\n';
	}
	
	try
	{
		RobotomyRequestForm module("007");
		c.executeForm(module);
	}
	catch(const std::exception& e)
	{
		std::cout << BRIGHT_RED	 << e.what() << RESET << '\n';
	}
}
	
