#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat *a = new Bureaucrat("Bart", 23);


	std::cout << "TEST SUCCESS" << std::endl;
	try
	{
		AForm *sapin = new ShrubberyCreationForm("Noel");
		sapin->execute(*a);
			
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm *document = new PresidentialPardonForm("CONFIDENTIAL");
		document->execute(*a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		AForm *project = new RobotomyRequestForm("SPACE_X");
		project->execute(*a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

/*	std::cout << "document already signed" << std::endl;

	Bureaucrat b("Denis", 150);


	try
	{
		ShrubberyCreationForm sapin("Noel");
		sapin.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm document("CONFIDENTIAL");
		document.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		RobotomyRequestForm project("SPACE_X");
		project.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
*/
	std::cout << "TEST FAILED" << std::endl; 


	Bureaucrat *c = new Bureaucrat("Marc", 150);


	try
	{
		AForm *big_tree = new ShrubberyCreationForm("BIGGEST");
		big_tree->execute(*c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm *conf = new PresidentialPardonForm("BOMBE");
		conf->execute(*c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		AForm *module = new RobotomyRequestForm("007");
		module->execute(*c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
	
