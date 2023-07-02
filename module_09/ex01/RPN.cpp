#include "RPN.hpp"

RPN::RPN() {
	std::cout << "Basic constructeur\n";
	return ;
}
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
	if (checkInput(initStr) == false)
		throw std::invalid_argument("Bad input");
	std::stringstream ss(initStr);
	while (ss) {
		m_stackNum.push(ss.str());
	}
}

bool RPN::checkInput(const std::string &initStr){
	std::size_t found(initStr.find_first_not_of("0123456789 +-/*"));
	if (found != std::string::npos)
		return (false);
	std::istringstream ss(initStr);
	std::string element;
	while(ss >> element) {
		m_stackNum.push(element);
	}
	
	return (true);
}
