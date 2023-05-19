
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

Bureaucrat::Bureaucrat(Bureaucrat const & src):
	M_NAME(src.M_NAME), m_grade(src.m_grade) {}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade(void) const {
	return (this->m_grade);
}

std::string Bureaucrat::getName(void) const{
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

void Bureaucrat::signForm(Form & t_form) const {
	try {
		t_form.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cout << this->M_NAME << " cannot sign "
			<< t_form.getName() << " because "
			<< e.what() << std::endl;
		return ;
	}
	std::cout << this->M_NAME << " signs " << t_form.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const & t_form) const {
	try{
		t_form.beExecuted(*this);
	}
	catch (std::exception &e) {
		std::cout << this->M_NAME << " cannot execute "
			<< t_form.getName() << " because "
			<< e.what() << std::endl;
		return ;
	}
	std::cout << this->M_NAME << " has executed " << t_form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &Bureaucrat){
	o << Bureaucrat.getName() << ", bureaucrat grade "
		<< Bureaucrat.getGrade() << std::endl;
	return o;
}
