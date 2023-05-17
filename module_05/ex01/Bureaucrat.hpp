
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>

class Bureaucrat {
	private:
		const std::string	M_NAME;
		int m_grade;

		Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const & Bureaucrat);
	public:
		Bureaucrat(const std::string T_NAME, int t_grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
		// Member function
		void signForm(Form & t_form) const;
		// Getter
		std::string getName(void) const;
		int getGrade(void) const;
		// Setter 
		void incrementGrade(void);
		void decrementGrade(void);

		// Exception handeling
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade is too low");
				}
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &Bureaucrat);
#endif
