#include "Bitcoinexchange.hpp"
#include <iostream>
#include <fstream>
#include <map>


int main(int argc, char **argv) {
	(void) argv;
	if (argc != 2) {
		//std::cerr << "Format: " << argv[0] << " arg1\n";
		std::cerr << "Error: could not open file.\n";
		return (1);
	}
	BitCoinExchange Data("data.csv");
	Data.inputProcess(argv[1]);
	return (0);
}

