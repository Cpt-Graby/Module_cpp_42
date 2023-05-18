
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : M_NAME("default"), M_GRADE_TO_SIGN(1), M_GRADE_TO_EXEC(1), m_signed(false) {}

Form::Form(const std::string t_name, const int t_grade_to_sign,
			const int t_grade_to_exec) :
				M_NAME(t_name),
				M_GRADE_TO_SIGN(t_grade_to_sign),
				M_GRADE_TO_EXEC(t_grade_to_exec),
				m_signed(false)
	{
	if (t_grade_to_sign < 1 || t_grade_to_exec < 1)
		throw Form::GradeTooHighException();
	else if (t_grade_to_sign > 150 || t_grade_to_exec > 150)
		throw Form::GradeTooLowException();
	}

Form::Form(Form const & src) :
				M_NAME(src.M_NAME),
				M_GRADE_TO_SIGN(src.M_GRADE_TO_SIGN),
				M_GRADE_TO_EXEC(src.M_GRADE_TO_EXEC),
				m_signed(src.m_signed)
	{}

Form::~Form() {}

Form & Form::operator=(Form const & src) {
	if (this != &src)
		this->m_signed = src.m_signed;
	return (*this);
}

std::string Form::getName() const {
	return (this->M_NAME);
}

int Form::getGradeToSign() const {
	return (this->M_GRADE_TO_SIGN);
}

int Form::getGradeToExec() const {
	return (this->M_GRADE_TO_EXEC);
}
bool Form::getSigned() const {
	return (this->m_signed);
}

void Form::beSigned(Bureaucrat const & t_Bureaucrat) {
	if (t_Bureaucrat.getGrade() > this->M_GRADE_TO_SIGN) {
		throw Form::GradeTooLowException();
	}
	else {
		this->m_signed = true;
	}
}

std::ostream &operator<<(std::ostream &o, Form const &src) {
	o << src.getName()
		<< " need Grade:" << src.getGradeToSign()
		<< " to be signed and Grade:" << src.getGradeToExec()
		<< " to be executed.";
	return (o);
}
