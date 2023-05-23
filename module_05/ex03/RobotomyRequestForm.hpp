
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		const std::string M_TARGET;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(const std::string t_target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();
		void beExecuted(Bureaucrat const & t_bureaucrat) const;
		std::string getTarget() const;
};

#endif
