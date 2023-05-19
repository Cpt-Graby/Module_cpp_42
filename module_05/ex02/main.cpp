
#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat  b3("Bureaucrat3", 3);
//	Form		*f = new ShrubberyCreationForm("Home");
//	Form		*f2 = new RobotomyRequestForm("Robot");
	Form		*f3 = new PresidentialPardonForm("President");

	std::cout << b3 << std::endl;
	b3.executeForm(*f3);
	std::cout << b3 << std::endl;
	b3.signForm(*f3);
	b3.executeForm(*f3);
	delete f3;

	return (0);
}
