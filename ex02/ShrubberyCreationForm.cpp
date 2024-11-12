#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : grade_sign(145), grade_exec(137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : name(target), grade_sign(145), grade_exec(137)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    *this = other;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}