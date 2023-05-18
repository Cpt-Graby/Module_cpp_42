
#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

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

void ShrubberyCreationForm::beExecuted(Bureaucrat const & t_bureaucrat) const {
	try {
		Form::beExecute(t_bureaucrat);
		std::string filename = M_TARGET + "_shrubbery";
		//std::string filename("test_shrubbery");
		std::ofstream file(filename);
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
	catch (std::exception & e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
