#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <stack>
#include <exception>

class RPN {
	private:
		std::stack<std::string> m_stackNum;
		RPN();
		RPN(const RPN & rhs);
		RPN &operator=(const RPN & rhs);
	public:
		~RPN();
		RPN(const std::string &initStr);
};

#endif 
