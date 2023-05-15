
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(int t_grade, const std::string T_NAME) :
	_NAME(T_NAME), _grade(t_grade) {}

Bureaucrat::Bureaucrat(Bureaucrat const &src):
	_NAME(src._NAME), _grade(src._grade) {}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

const std::string Bureaucrat::getName(void) const{
	return (this->_NAME);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &Bureaucrat){
	o << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
	return o;
};

