#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat a("Bart", 23);


	std::cout << "TEST SUCCESS" << std::endl;
	try
	{
		ShrubberyCreationForm sapin("Noel");
		sapin.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm document("CONFIDENTIAL");
		document.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		RobotomyRequestForm project("SPACE_X");
		project.execute(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "TEST FAILED" << std::endl; 


	Bureaucrat c("Marc", 150);


	try
	{
		ShrubberyCreationForm big_tree("BIGGEST");
		big_tree.execute(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm conf("BOMBE");
		conf.execute(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		RobotomyRequestForm module("007");
		module.execute(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
	
