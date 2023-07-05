#include "Span.hpp"
#include <iostream>
#include <vector>

int main (void) {
	Span sp = Span(10);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << "\n";
	std::cout << sp.longestSpan() << "\n";
	try {
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(100);
	vect.push_back(20);
	vect.push_back(10);
	vect.push_back(100);
	vect.push_back(20);
	sp.addNumber(vect);
	std::cout << sp.shortestSpan() << "\n";
	std::cout << sp.longestSpan() << "\n";
	}
	catch ( std::exception &e) {
		std::cout << e.what() << "\n";
	}
	return (0);
}
