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

bool firstCheck(std::string const &Input, char c) {
	std::size_t foundOne = Input.find_first_of(c);
	std::size_t foundSecond = Input.find_last_of(c);
	if (foundOne != foundSecond || foundOne == std::string::npos)
		return (false);
	return (true);
}

bool DateCheck(std::string const &Input) {
	(void) Input;
	return (true);
}

std::map<std::string, int>  getCsvData(void) {
	std::map<std::string, int> csvData;
	std::fstream file("data.csv");
	std::string line;
	std::string date;
	std::string input;
	if (file.is_open()) {
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
	return (csvData);
}

void btcStart(char *filename) {
	std::cout << "The filename is: " << filename << "\n";
	std::map<std::string, int> CsvData(getCsvData());
	for (auto& i : CsvData) {
		std::cout << i << "\n";
	}
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
