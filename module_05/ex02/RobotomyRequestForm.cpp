
#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>
#include <string>

RobotomyRequestForm::RobotomyRequestForm():
	Form("default", 150, 150), M_TARGET("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string t_target):
	Form("RobotomyRequestForm", 72, 45), M_TARGET(t_target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
	Form(src), M_TARGET(src.M_TARGET) 
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
	Form::operator=(src);
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return (this->M_TARGET);
}

void RobotomyRequestForm::beExecuted(Bureaucrat const & t_bureaucrat) const {
	try {
		Form::beExecuted(t_bureaucrat);
	}
	catch (std::exception & e) {
		return;
	}
	std::cout << "Bzzzzz Bzzzzz Bzzzzz" << std::endl;
	if (rand() % 2 == 0) {
		std::cout << this->M_TARGET << " has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << this->M_TARGET << " has failed to be robotomized" << std::endl;
	}
}
