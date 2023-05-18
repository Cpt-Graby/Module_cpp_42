
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form {
	protected:
		Form(void);
		const std::string M_NAME;
		const int M_GRADE_TO_SIGN;
		const int M_GRADE_TO_EXEC;
		bool m_signed;
		Form & operator=(Form const & src);
	public:
		Form(const std::string t_name, const int t_grade_to_sign, const int t_grade_to_exec);
		Form(Form const & src);
		virtual ~Form();
		//Public methods
		void beSigned(Bureaucrat const & t_Bureaucrat);
		virtual void beExecute(Bureaucrat const & t_Bureaucrat) const;
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
