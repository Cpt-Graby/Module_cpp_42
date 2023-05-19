
#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("default", 150, 150), M_TARGET("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string t_target):
	Form("ShrubberyCreationForm", 145, 137), M_TARGET(t_target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
	Form(src), M_TARGET(src.M_TARGET) 
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	Form::operator=(src);
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return (this->M_TARGET);
}

void ShrubberyCreationForm::beExecuted(Bureaucrat const & t_bureaucrat) const {
	try {
		Form::beExecuted(t_bureaucrat);
	}
	catch (std::exception & e) {
		return;
	}
	std::string filename(this->getTarget() + "_shrubbery");
	std::ofstream file;
	//file.open(filename, std::ios::out);
	file.open(filename.c_str(), std::ios::out);
	if (!file.is_open()) {
		std::cout << "Error: could not open file" << std::endl;
		return;
	}
	file << "       _-_\n";
	file << "    /~~   ~~\\\n" ;
	file << " /~~         ~~\\\n";
	file << "{               }\n";
	file << " \\  _-     -_  /\n";
	file << "   ~  \\\\ //  ~\n";
	file << "_- -   | | _- _\n";
	file << "  _ -  | |   -_\n";
	file << "      // \\\\\n";
	file << std::endl;
	file.close();
}
