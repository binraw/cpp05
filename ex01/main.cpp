#include "Bureaucrat.hpp"


int main(void)
{
	Bureaucrat a("Bart", 23);
	std::cout << a << std::endl;
	a.incrementGrade();
	std::cout << a << std::endl;
	a.decrementGrade();
	std::cout << a << std::endl;

	try 
	{
		Bureaucrat	bob("poppi", 4242);
		std::cout << bob << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try 
	{
		Bureaucrat	soph("poppi", -12);
		std::cout << soph << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

}
	
