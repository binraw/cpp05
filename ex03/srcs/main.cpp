#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/Intern.hpp"
int main(void)
{
Intern someRandomIntern;
AForm *a;
AForm *b;
AForm *c;

a = someRandomIntern.makeForm("robotomy request", "Bender");
b = someRandomIntern.makeForm("presidential", "Will");
c = someRandomIntern.makeForm("shrubbery", "Titouan");
	std::cout << a->getName() << std::endl;
	std::cout << b->getName() << std::endl;
	std::cout << c->getName() << std::endl;
	delete a;
	delete b;
	delete c;
}
	
