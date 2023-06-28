#include <iostream>
#include <limits>
#include <sstream>
#include <cstdlib>

// We will use the fonction of std::stod
// https://cplusplus.com/reference/string/stod/

char checkSpecialTerm(std::string &t_strArg);
bool isValidInput(const std::string &input);
bool isChar(const std::string &input);
bool isInt(const std::string &input);
bool isDouble(const std::string &input);
void printFromInt(std::string &input);
void printFromChar(std::string &input);
void printFromFloat(std::string &input);
void printFromDouble(std::string &input);

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
		else if (!isInt(strArg)) 
			printFromInt(strArg);
		else if (isChar(strArg)) 
			printFromChar(strArg);
		else if (!isDouble(strArg))
			printFromDouble(strArg);
		else
			printFromFloat(strArg);
	}
	catch ( const std::invalid_argument& ia ) {
		std::cerr << "Invalid argument: " << ia.what() << "\n";
		return (1);
		}
	return (0);
}
