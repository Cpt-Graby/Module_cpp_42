#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN & rhs) {
	if (this->m_stackNum != rhs.m_stackNum)
		this->m_stackNum = rhs.m_stackNum;
}

RPN & RPN::operator=(const RPN & rhs){
	if (this->m_stackNum != rhs.m_stackNum)
		this->m_stackNum = rhs.m_stackNum;
	return (*this);
}

RPN::RPN(const std::string &initStr) {
	std::size_t found(initStr.find_first_not_of("0123456789 +-/*"));
	if (found != std::string::npos)
		throw std::invalid_argument("Bad input");
	std::stringstream ss(initStr);
	while (ss) {
		m_stackNum.push(ss.str());
	}
	for (;:`
}
