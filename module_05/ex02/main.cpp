
#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat  b("Bureaucrat1", 1);
	Bureaucrat  b150("Bureaucrat150", 150);
	Form        *f = new ShrubberyCreationForm("home");

	std::cout << b << std::endl;
	std::cout << b150 << std::endl;
	std::cout << *f << std::endl;
	b.executeForm(*f);
	std::cout << std::endl;
	b150.signForm(*f);
	b150.executeForm(*f);
	b.signForm(*f);
	b.executeForm(*f);
	delete f;

	return (0);
}
