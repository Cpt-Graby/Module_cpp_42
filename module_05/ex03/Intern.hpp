#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <iostream>

struct intermediateForm {
	std::string nameForm;
	Form *t_form;
};

class Intern {
	private:
		intermediateForm m_tab[4];
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);
		Form * makeForm(std::string const formName, std::string const target);

		class FormNotFoundException : public std::exception {
			public:
				virtual const char * what() const throw(){
					return "Form not existing";}
		};
};

#endif
