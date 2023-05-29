
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	
	this->m_tab[0].nameForm = ("Shrubbery Creation request");
	this->m_tab[1].nameForm = ("Robotomy request");
	this->m_tab[2].nameForm = ("Presidential pardon request");
	this->m_tab[3].nameForm = ("");
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
	this->m_tab[0].t_form  = new ShrubberyCreationForm(target);
	this->m_tab[1].t_form  = new RobotomyRequestForm(target);
	this->m_tab[2].t_form  = new RobotomyRequestForm(target);
	for (int i = 0; i < 3; i++) {
		if (this->m_tab[i].nameForm== formName) {
			std::cout << "Intern creates " << formName << std::endl;
			ret = i;
		}
	}
	return (ret);
}
