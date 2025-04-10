#include "Bureaucrat.hpp"


int main(void)
{
	Bureaucrat a("Bart", 23);
	Form paper1("CONFIDENTIEL", 1, 1);
	Form paper2("torchon", 150, 150);

	// impossible to sign
	a.signForm(paper1);
	// sign OK
	a.signForm(paper2);
	// impossible to sign because is already signed
	a.signForm(paper2);
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
	
