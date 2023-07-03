#include <iostream>
#include "Array.hpp"

int main(void) {
	Array<int> a;
	std::cout << a.size() << std::endl;
	std::cout << "-------------\n";
	Array<int> b(5);
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
