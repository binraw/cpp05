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
AForm *d;
Bureaucrat bob("Bob", 1);

a = someRandomIntern.makeForm("robotomy request", "Bender");
b = someRandomIntern.makeForm("presidential", "Will");
c = someRandomIntern.makeForm("shrubbery", "Titouan");
d = someRandomIntern.makeForm("blabla", "Denis");
std::cout << a->getName() << std::endl;
std::cout << b->getName() << std::endl;
std::cout << c->getName() << std::endl;

try
{
    bob.executeForm(*b);
}
catch(const std::exception& e)
{
    std::cout << e.what() << '\n';
}


delete a;
delete b;
delete c;

}
	
