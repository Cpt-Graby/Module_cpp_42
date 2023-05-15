
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	private:
		int _grade;
		std::string	_name;
	public:
		Bureaucrat(void);
		Bureaucrat(int init_grade, std::string initName);
		Bureaucrat(Bureaucrat const &Bureaucrat);
		~Bureaucrat(void);
		std::string getName(void) const;
		std::string getGrade(void) const;

};
#endif
