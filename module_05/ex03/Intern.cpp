
#include "Intern.hpp"

Intern::Intern(){
	m_formtable[0] = ("Shrubbery Creation request");
	m_formtable[1] = ("Robotomy request");
	m_formtable[2] = ("Presidential pardon request");
	m_formtable[3] = ("");
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {
}

Intern & Intern::operator=(Intern const & rhs) {
	if (this != &rhs)
		return *this;
}

Form * Intern::makeForm(std::string const formName, std::string const target) {
	Form* ret;
	for (int i = 0; i < 4, i++) {
		if (m_formtable[i] == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			ret = new Form(formName, 5, 156);
			return (ret);
		}
	}
	ret = new Form("test", 5 , 156);
	return (ret);
}
