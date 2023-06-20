#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <stdexcept>

class Span {
	private:
		Span();
		unsigned int m_maxSize;
		unsigned int m_qtyElement;
		std::vector<int> m_tab;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span & rhs);
		void addNumber(int i);
		unsigned int shortestSpan();
		unsigned int longestSpan();

		class NoRoomLeftExcept : public std::exception {
			virtual const char *what() const throw() {
				return ("Array full");
			};
		};

		class NoDistanceExcept : public std::exception {
			virtual const char *what() const throw() {
				return ("Not enough element");
			};
		};
};

#endif
