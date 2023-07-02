#include "ScalarConverter.hpp"
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
	/*
	try  {
		double	 DS(2147483646);
		float SUPER(2147483646);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "Ces deux valeurs sont similaires\n";
		std::cout << "ici      DS: ";
		std::cout << DS << std::endl;
		std::cout << "ici   SUPER: ";
		std::cout << SUPER << std::endl;
		std::cout << "ici cast DS: ";
		std::cout << static_cast<float>(DS) << std::endl;
		std::cout << "-----------\n";
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	*/
	ScalarConverter Tester(argv[1]);
	return (0);
}
