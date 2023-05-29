
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	this->m_tabName[0] = "Shrubbery Creation request";
	this->m_tabName[1] = ("Robotomy request");
	this->m_tabName[2] = ("Presidential pardon request");
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {
}

Intern & Intern::operator=(Intern const & rhs) {
	if (this != &rhs)
		return *this;
	return (*this);
}

Form * Intern::makeForm(std::string const formName, std::string const target) {
	int	ret = 3;
	Form *t_form;
	for (int i = 0; i < 3; i++) {
		if (this->m_tabName[i] == formName) {
			ret = i;
		}
	}
	switch (ret) {
		case 0:
			t_form = new ShrubberyCreationForm(target);
			break;
		case 1:
			t_form = new RobotomyRequestForm(target);
			break;
		case 2:
			t_form = new PresidentialPardonForm(target);
			break;
		default:
			throw FormNotFoundException();
	}
	return (t_form);
}
