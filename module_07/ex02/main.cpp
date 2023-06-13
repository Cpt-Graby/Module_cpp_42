#include <iostream>
#include "Array.hpp"

int main(void) {
	Array<int> b(5);
	for (int i = 0; i < 5; i++) {
		std::cout << b[i] << "\n";
	}
}
