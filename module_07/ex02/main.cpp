#include <iostream>
#include "Array.hpp"

int main(void) {
	unsigned int number = -3;
	std::cout << number;
	Array<int> b(5);
	Array<int> cl(number);
	for (int i = 0; i < 5; i++) {
		b[i] = i; 
		std::cout << b[i] << "\n";
	}
	std::cout << "-------\n size: ";
	std::cout << static_cast<int>(b.size());
	std::cout << "\n-------\n";
	try {
	b[7] = 6;
	}
	catch (const std::exception & e) {
		std::cout << e.what() ;
	}
}
