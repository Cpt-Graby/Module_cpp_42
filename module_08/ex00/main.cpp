
#include "easyfind.hpp"
#include <iostream>
#include <vector>

template<typename T>
void teststack(int value) {
	T data(10);
	data.push_back(2);
	data.push_back(17);
	data.push_back(42);
	data.push_back(17);
	data.push_back(6);
	data.push_back(3);
	data.push_back(17);
	data.push_back(9);
	data.push_back(11);
	try {
	std::cout << easyfind(data, value);	
	}
	catch (std::exception &e) {
		e.what();
	}
}

int main(void) {
	teststack<std::vector<int> >(43);
	std::cout << "\n--------\n";
	return (0);
}
