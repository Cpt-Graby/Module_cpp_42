
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		const std::string M_TARGET;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string t_target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();
		void beExecuted(Bureaucrat const & t_bureaucrat) const;
};

#endif
