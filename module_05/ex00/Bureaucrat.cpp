
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

	Bureaucrat::Bureaucrat(const std::string T_NAME, int t_grade) :
	M_NAME(T_NAME) {
		if (t_grade < 1) {
			throw Bureaucrat::GradeTooLowException();
		}
		else if (t_grade > 150) {
			throw Bureaucrat::GradeTooHighException();
		}
		else {
			m_grade = t_grade;
		}
	}

Bureaucrat::Bureaucrat( Bureaucrat const &src):
	M_NAME(src.M_NAME), m_grade(src.m_grade) {}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade(void) const {
	return (this->m_grade);
}

const std::string Bureaucrat::getName(void) const{
	return (this->M_NAME);
}

//Setter
void Bureaucrat::incrementGrade(void) {
	if (this->m_grade - 1 < 1) {
		throw Bureaucrat::GradeTooLowException();
	}
	else {
		this->m_grade--;
	}
}

void Bureaucrat::decrementGrade(void) {
	if (this->m_grade + 1 > 150) {
		throw Bureaucrat::GradeTooHighException();
	}
	else {
		this->m_grade++;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &Bureaucrat){
	o << Bureaucrat.getName() << ", bureaucrat grade "
		<< Bureaucrat.getGrade() << std::endl;
	return o;
}
