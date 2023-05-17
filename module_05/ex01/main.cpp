
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Form f("Form", 0, 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Form f1("Form1", 1, 150);
	std::cout << f1 << std::endl;
	return (0);
}
