#include "RPN.hpp"
#include <cstdlib>

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
		throw std::invalid_argument("Error: Bad input");
	}
	std::stringstream	ss(initStr);
	std::string			word;
	char				c;
	size_t				nbrElement(m_stackNum.size());
	long				numRight(0);
	long				numLeft(0);

	while (ss >> word) {

		// case were word is a digit
		if (word.find_first_of("0123456789") != std::string::npos) {
			c = word[0];
			m_stackNum.push(c - '0');
		}
		else if (word == "+" && nbrElement >= 2) {
			numRight = m_stackNum.top();
			m_stackNum.pop();
			numLeft = m_stackNum.top();
			m_stackNum.pop();
			m_stackNum.push(numRight + numLeft);
		}
		else if (word == "-" && nbrElement >= 2) {
			numRight = m_stackNum.top();
			m_stackNum.pop();
			numLeft = m_stackNum.top();
			m_stackNum.pop();
			m_stackNum.push(numLeft - numRight);
		}
		else if (word == "/" && nbrElement >= 2) {
			numRight = m_stackNum.top();
			m_stackNum.pop();
			numLeft = m_stackNum.top();
			m_stackNum.pop();
			if (numRight == 0)
				throw std::runtime_error("Math error: Attempted to divide by zero\n");
			m_stackNum.push(numLeft / numRight);
		}
		else if (word == "*" && nbrElement >= 2) {
			numRight = m_stackNum.top();
			m_stackNum.pop();
			numLeft = m_stackNum.top();
			m_stackNum.pop();
			m_stackNum.push(numLeft * numRight);
		}
		else {
			throw std::invalid_argument("Error: Invalid operation");
		}
		nbrElement = m_stackNum.size();
	}
	if (nbrElement != 1) {
		throw std::invalid_argument("Error: Operator missing");
	}
	m_result = m_stackNum.top();
	m_stackNum.pop();
	std::cout << m_result;
}

bool RPN::checkInput(const std::string &initStr) {
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
