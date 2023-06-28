#include "Bitcoinexchange.hpp"

BitCoinExchange::BitCoinExchange() {}

BitCoinExchange::~BitCoinExchange() {}

BitCoinExchange::BitCoinExchange(const std::string &dataPath) {
	std::fstream file(dataPath.c_str());
	std::string line;
	std::size_t found;
	std::string date;
	std::string value;
	double rate;
	if (file.is_open()) {
		getline(file, line);
		while (getline(file, line)) {
			// Checking for error
			found = line.find(',');
			if (found == std::string::npos) {
				std::cerr << "Not the right format:";
				std::cerr << line << "\n";
				continue ;
			}
			// Creating the main two part
			date = line.substr(0, found);
			value = line.substr(found + 1);
			// Checking for error
			found = value.find(',');
			if (found != std::string::npos) {
				std::cerr << "Not the right format:";
				std::cerr << line << "\n";
				continue ;
			}
			std::stringstream(value) >> rate;
			m_csvData[date] = rate;
		}
		file.close();
	}
}

void BitCoinExchange::inputProcess(const std::string &pathFile){
	std::fstream file(pathFile.c_str());
	std::string line, date, value;
	if (file.is_open()) {
		getline(file, line);
		if (line != "date | value") {
			std::cout << "Error: Bad first line input => " << line << "\n";
			return ;
		}
		while (getline(file, line)) {
			if (line.size() <= 13) {
				std::cout << "Error: bad input => " << line << "\n";
				continue ;
			}
			else if (std::count(line.begin(), line.end(), ' ') != 2
				|| (std::count(line.begin(), line.end(), '|') != 1)) {
				std::cout << "Error: bad input => " << line << "\n";
				continue ;
			}
			else if  (line.substr(10, 3) != " | ") {
				std::cout << "Error: Separation data => " << line << "\n";
				continue ;
			}
			else if (line.find_first_not_of("123456789- !") != std::string::npos) {
				std::cout << "Error: Invalid Character =>" << line << "\n";
				continue ;
			}
		}
		file.close();
	}
	else
		std::cerr << "Error: could not open file.\n";
	return ;
}
