
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat  b("Bureaucrat", 1);
	Form        *f = new ShrubberyCreationForm("home");

	std::cout << b << std::endl;
	std::cout << *f << std::endl;
	b.signForm(*f);
	b.executeForm(*f);
	delete f;

	return (0);
}
