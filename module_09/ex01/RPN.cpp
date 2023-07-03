#include "RPN.hpp"

RPN::RPN(): m_result(0) {
	std::cout << "Basic constructeur\n";
	return ;
}
RPN::~RPN() {}

RPN::RPN(const RPN & rhs) {
	if (this->m_stackNum != rhs.m_stackNum) {
		this->m_stackNum = rhs.m_stackNum;
		this->m_result = rhs.m_result;
	}
}

RPN & RPN::operator=(const RPN & rhs){
	if (this->m_stackNum != rhs.m_stackNum) {
		this->m_stackNum = rhs.m_stackNum;
		this->m_result = rhs.m_result;
	}
	return (*this);
}

RPN::RPN(const std::string &initStr): m_result(0) {
	if (checkInput(initStr) == false) {
		throw std::invalid_argument("Bad input");
	}
}

bool RPN::checkInput(const std::string &initStr){
	std::size_t found(initStr.find_first_not_of("0123456789 +-/*"));
	if (found != std::string::npos)
		return (false);
	for (size_t i = 0; i < initStr.size(); i++) { 
		if (initStr[i] == ' ')
			continue ;
		else {
			if (initStr[i + 1] && initStr[i + 1] != ' ')
				return (false);
			i++;
		}
	}
	return (true);
}
