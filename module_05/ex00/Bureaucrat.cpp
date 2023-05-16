
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(int t_grade, const std::string T_NAME) :
	M_NAME(T_NAME), m_grade(t_grade) {}

Bureaucrat::Bureaucrat(Bureaucrat const &src):
	M_NAME(src.M_NAME), m_grade(src.m_grade) {}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade(void) const {
	return (this->m_grade);
}

const std::string Bureaucrat::getName(void) const{
	return (this->M_NAME);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &Bureaucrat){
	o << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
	return o;
};

