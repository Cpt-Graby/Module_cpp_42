#include <iostream>
#include "Array.hpp"

int main(void) {
	Array<int> b(5);
	for (int i = 0; i < 5; i++) {
		b[i] = i; 
		std::cout << b[i] << "\n";
	}
	std::cout << "-------\n";
	std::cout << static_cast<int>(b.size());
	std::cout << "-------\n";
}
