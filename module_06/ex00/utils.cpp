#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>
#include <cstdlib>

static void printSpecialTerm(const int indexMatch);

bool isValidInput(const std::string input) {
	// conter les occurences des charatect +-.f
	return (input.size() != 1 &&
			input.find_first_not_of("+-0123456789.f") != std::string::npos);
}

bool isChar(const std::string input) {
	return (input.size() != 1);
}

bool isInt(const std::string input) {
	return (input.find_first_not_of("+-0123456789") != std::string::npos);
}

bool isDouble(const std::string input) {
	return (input.find_first_not_of("+-0123456789.") != std::string::npos);
}

char checkSpecialTerm(std::string t_strArg){
	const std::string specialTerm[8] = {"-inff", "-inf", "inff", "inf",
		"+inff", "+inf", "nanf", "nan"};

	for (int i = 0; i < 6; i++) {
		if (t_strArg == specialTerm[i]) {
			printSpecialTerm(i);
			return (0);
		}
	}
	return (1);
}

static void printSpecialTerm(const int indexMatch) {
	std::cout << "char: impossible\n" ;
	std::cout << "int: impossible\n" ;
	switch (indexMatch) {
		case (0): 
		case (1): 
			std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f\n";
			std::cout << "double: " << -std::numeric_limits<double>::infinity() << "\n";
			break;
		case (2): 
		case (3): 
		case (4): 
		case (5): 
			std::cout << "float: " << std::numeric_limits<float>::infinity() << "f\n";
			std::cout << "double: " << std::numeric_limits<double>::infinity() << "\n";
			break;
		case (6): 
		case (7): 
			std::cout << "float: " << std::numeric_limits<float>::quiet_NaN() << "f\n";
			std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << "\n";
			break;
		default:
			return ;
	}
	return ;
}
