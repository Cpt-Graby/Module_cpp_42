#include <iostream>
#include <limits>
#include <sstream>
#include <cstdlib>

// We will use the fonction of std::stod
// https://cplusplus.com/reference/string/stod/
void functionCast(double dNumber);

char checkSpecialTerm(std::string t_strArg);
bool isValidInput(const std::string input);
bool isChar(const std::string input);
bool isInt(const std::string input);
bool isDouble(const std::string input);
void printFromInt(std::string input);

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Rentre le bon nombre d'arguments \n" ;
		return (0);
	}
	std::string strArg(argv[1]);
	if (!checkSpecialTerm(strArg))
		return (0);

	try {
		if (isValidInput(strArg)) 
			throw std::invalid_argument("Erreur de format");
		else if (!isChar(strArg))
			std::cout << isChar(strArg) << "char\n";
		else if (!isInt(strArg))
			printFromInt(strArg);
		else if (!isDouble(strArg))
			std::cout << isDouble(strArg) << "d\n";
		else
			std::cout << "its a float \n";
	}
	catch ( const std::invalid_argument& ia ) {
		std::cerr << "Invalid argument: " << ia.what() << "\n";
		return (1);
		}
	return (0);
}

void functionCast(double dNumber) {
	// ----------- case char
	if ( dNumber >= std::numeric_limits<char>::min() &&  
			dNumber <= std::numeric_limits<char>::max()) {
		char cNumber = static_cast<char>(dNumber);
		if ( cNumber < 32 || cNumber > 126)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << cNumber << "'\n";
	}
	else
		std::cout << "char: impossible \n";
	// ----------- case int
	if ( dNumber >= std::numeric_limits<int>::min() &&  
			dNumber <= std::numeric_limits<int>::max()) {
		int iNumber = static_cast<char>(dNumber);
		std::cout << "int: " << iNumber << "\n";
		std::cout << "float: " << static_cast<float>(dNumber) << "f\n";
		std::cout << "double: " << dNumber << "\n";
		return ;
	}
	else
		std::cout << "int: impossible \n";
	// ----------- case float
	if ( dNumber >= std::numeric_limits<float>::min() &&  
			dNumber <= std::numeric_limits<float>::max()) {
		float fNumber = static_cast<float>(dNumber);
		std::cout << "float: " << fNumber << "f\n";
		std::cout << "double: " << dNumber << "\n";
		return ;
	}
	else {
		std::cout << "float: impossible \n";
		std::cout << "double: " << dNumber << "\n";
	}
	return ;
}
