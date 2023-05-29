#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <iostream>


class Intern {
	private:
		std::string m_tabName[3];
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
