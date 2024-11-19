#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat a("Bart", 23);

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
	

	// try 
	// {
	// 	Bureaucrat	bob("poppi", 4242);
	// 	std::cout << bob << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }

	// try 
	// {
	// 	Bureaucrat	soph("poppi", -12);
	// 	std::cout << soph << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }

}
	
