
#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	std::cout << "---------------------" << std::endl;
	try {
	Bureaucrat b("Bureaucrat", -1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	try {
	Bureaucrat b("Bureaucrat", 151);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Bureaucrat b("Bureaucrat", 1);
	try {
		b.incrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Bureaucrat b2("Bureaucrat", 150);
	try {
		b2.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Bureaucrat b3("Bureaucrat 3", 1);
	std::cout << b3 << std::endl;
	b3.decrementGrade();
	std::cout << b3 << std::endl;
	return (0);
}
