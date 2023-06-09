
#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Format errors.\n";
		std::cerr << "Usage: ./" << argv[0] << " '[arguments]'\n";
		return (1);
	}
	std::string values(argv[1]);
	try {
		RPN first(values);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
	}
	return (0);
}
