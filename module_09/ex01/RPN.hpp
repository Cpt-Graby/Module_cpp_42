#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <exception>

class RPN {
	private:
		std::stack<std::string> m_stackNum;
		RPN();
		bool checkInput(const std::string &initStr);

	public:
		RPN(const RPN & rhs);
		RPN &operator=(const RPN & rhs);
		RPN(const std::string &initStr);
		~RPN();
		void outputResult(void);
};

std::ostream & operator<<(std::ostream& os, const RPN & src);

#endif 
