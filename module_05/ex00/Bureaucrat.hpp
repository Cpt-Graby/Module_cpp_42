
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	private:
		int _grade;
		const std::string	_NAME;
		Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
	public:
		Bureaucrat(int t_grade, const std::string T_NAME);
		Bureaucrat(Bureaucrat const &Bureaucrat);
		~Bureaucrat(void);
		const std::string getName(void) const;
		int getGrade(void) const;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &Bureaucrat);
#endif
