#include "Bureaucrat.hpp"


int main(void)
{
	Bureaucrat a("Bart", 23);




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
	
