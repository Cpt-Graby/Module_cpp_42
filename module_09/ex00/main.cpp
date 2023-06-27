#include <iostream>
#include <fstream>
#include <map>

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
	/*
	std::string line;

	std::fstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Error: could not open file.\n";
		return ;
	}
	else {
		while (getline(file, line)) {
			if (firstCheck(line, ',') == false) {
				std::cerr << "Not the right format\n";
				continue ;
			}
			//std::cout << firstCheck(line) << "\n";
			//std::cout << line << "\n";
		}
		std::cout << "end of file\n";
		file.close();
	}
	*/
	return ;
}
