#include "Span.hpp"
#include <iostream>

int main (void) {
	Span sp = Span(6);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(11);
	sp.addNumber(9);
	std::cout << sp.shortestSpan() << "\n";
	std::cout << sp.longestSpan() << "\n";
	std::cout << "----------------\n";
	Span sp2(sp);
	sp.addNumber(10);
	std::cout << sp2.getQtyElement() << "\n";
	std::cout << sp2.getMaxSize() << "\n";
	sp2.addNumber(54);
	try {
		sp2.addNumber(54);
	}
	catch (std::exception &e){
		std::cout << e.what() << "\n";
	}
	std::cout << sp2.shortestSpan() << "\n";
	std::cout << sp2.longestSpan() << "\n";
	return (0);
}
