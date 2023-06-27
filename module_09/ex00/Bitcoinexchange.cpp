#include "Bitcoinexchange.hpp"

bool firstCheck(std::string const &Input, char c) {
	std::size_t foundOne = Input.find_first_of(c);
	std::size_t foundSecond = Input.find_last_of(c);
	if (foundOne != foundSecond || foundOne == std::string::npos)
		return (false);
	return (true);
}

BitCoinExchange::BitCoinExchange() {}

BitCoinExchange::~BitCoinExchange() {}

BitCoinExchange::BitCoinExchange(const std::string &dataPath) {
	std::fstream file(dataPath);
	if (file.is_open()) {
		std::string line;
		getline(file, line);
		while (getline(file, line)) {
			std::cout << line << "\n";
			if (firstCheck(line, ',') == false) {
				std::cerr << "Not the right format\n";
				continue ;
			}
		}
		file.close();
	}
}
