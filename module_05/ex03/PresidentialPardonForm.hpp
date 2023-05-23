
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		const std::string M_TARGET;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string t_target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();
		void beExecuted(Bureaucrat const & t_Bureaucrat) const;
		std::string getTarget() const;
};

#endif
