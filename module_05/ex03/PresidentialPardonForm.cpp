
#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm():
	Form("default", 150, 150), M_TARGET("default")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string t_target):
	Form("PresidentialPardonForm", 25, 5), M_TARGET(t_target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
	Form(src), M_TARGET(src.M_TARGET) 
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	Form::operator=(src);
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return (this->M_TARGET);
}

void PresidentialPardonForm::beExecuted(Bureaucrat const & t_bureaucrat) const {
	if (!this->getSigned()) {
		throw Form::FormNotSignedException();
	}
	try {
		Form::beExecuted(t_bureaucrat);
	}
	catch (std::exception & e) {
		return;
	}
	std::cout << this->M_TARGET << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
