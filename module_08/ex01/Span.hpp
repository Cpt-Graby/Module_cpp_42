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
		Span(const Span & rhs);
		Span& operator=(const Span &rhs);
		~Span();
		void addNumber(std::vector<int> &t_vector);
		void addNumber(int i);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		unsigned int getQtyElement() const;
		unsigned int getMaxSize() const;

		class NoRoomLeftExcept : public std::exception {
			virtual const char *what() const throw() {
				return ("Array full\n");
			};
		};

		class NoDistanceExcept : public std::exception {
			virtual const char *what() const throw() {
				return ("Not enough element\n");
			};
		};
};

#endif
