
#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Bureaucrat  b3("Bureaucrat150", 3);
	Form		*f = new ShrubberyCreationForm("Home");
	Form		*f2 = new RobotomyRequestForm("Robot");

	std::cout << b3 << std::endl;
	b3.signForm(*f2);
	b3.executeForm(*f2);
	delete f;

	return (0);
}
