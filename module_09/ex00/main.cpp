#include <iostream>
#include <fstream>

void btcStart(char *filename);

int main(int argc, char **argv) {
	(void) argv;
	if (argc != 2) {
		//std::cerr << "Format: " << argv[0] << " arg1\n";
		std::cerr << "Error: could not open file.\n";
		return (1);
	}
	btcStart(argv[1]);
	return (0);
}

void btcStart(char *filename) {
	std::cout << "The filename is: " << filename << "\n";
	std::fstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Error: could not open file.\n";
		return ;
	}


	return ;
}
