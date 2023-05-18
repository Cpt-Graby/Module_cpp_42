
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Form f("Form", -1, 0);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form f3("Form", 1, 160);
		std::cout << f3 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Bureaucrat b("Bureaucrat 1", 75);
	std::cout << b ;
	std::cout << "---------------------" << std::endl;
	Form f1("Form1", 1, 150);
	Form f2("Form2", 75, 150);
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	b.signForm(f1);
	b.signForm(f2);
	return (0);
}
