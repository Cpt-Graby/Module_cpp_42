#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>
#include <sstream>
#include <cstdlib>

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Rentre le bon nombre d'arguments \n" ;
		return (0);
	}
	ScalarConverter::convert(argv[1]);
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
