
#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Form {
	private:
		const std::string M_NAME;
		const int M_GRADE_TO_SIGN;
		const int M_GRADE_TO_EXEC;
		bool m_signed;
		Form(void);
		Form & operator=(Form const & src);

	public:
		Form(const std::string t_name, const int t_grade_to_sign, const int t_grade_to_exec);
		Form(Form const & src);
		~Form();
		//Public methods
		void beSigned(Bureaucrat const & t_Bureaucrat);
		// Getters
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getSigned() const;

		
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {return ("Grade too high");}
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {return ("Grade too low");}
	};
};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
