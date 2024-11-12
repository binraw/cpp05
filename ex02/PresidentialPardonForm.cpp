#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : name("default_shrubbery"), grade_sign(25), grade_exec(5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string n) : grade_sign(25), grade_exec(5)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}