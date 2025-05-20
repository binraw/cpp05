#include "Bureaucrat.hpp"


int main(void)
{

	Bureaucrat a("Bart", 23);
	Form paper1("CONFIDENTIEL", 1, 1);
	Form paper2("torchon", 150, 150);


	
	try
	{
		// impossible to sign
		a.signForm(paper1);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		// sign OK
		a.signForm(paper2);
		
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		// impossible to sign because is already signed
		a.signForm(paper2);

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	
	
	try 
	{
		// too low > 150
		Bureaucrat	bob("poppi", 4242);
		std::cout << bob << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try 
	{
		// too High < 1
		Bureaucrat	soph("poppi", -12);
		std::cout << soph << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

}
	
