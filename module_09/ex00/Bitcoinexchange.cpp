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

bool BitCoinExchange::firstCheck(const std::string &inputLine) {
	if (inputLine.size() <= 13) {
		std::cerr << "Error: bad input => " << inputLine << "\n";
		return (false);
	}
	else if (std::count(inputLine.begin(), inputLine.end(), ' ') != 2
		|| (std::count(inputLine.begin(), inputLine.end(), '|') != 1)) {
		std::cerr << "Error: not the right number of Delimiter  => ";
		std::cerr << inputLine << "\n";
		return (false);
	}
	else if  (inputLine.substr(10, 3) != " | ") {
		std::cerr << "Error: Delemiter not at the right place => ";
		std::cerr << inputLine << "\n";
		return (false);
	}
	else if (inputLine.find_first_not_of(".0123456789- |") != std::string::npos) {
		std::cerr << "Error: Invalid Character =>" << inputLine << "\n";
		return (false);
	}
	else
		return (true);
}

bool BitCoinExchange::checkValue(const std::string &valueStr) {
	float num;
	if (valueStr.find('-') != std::string::npos) {
		std::cerr << "Error: not a positive number.\n";
		return (false) ;
	}
	else if (valueStr.find_first_of("| -") != std::string::npos) {
		std::cerr << "Error: Invalid format.\n";
		return (false);
	}
	if (valueStr.size() > 4 && valueStr.find(".") >= 4) {
		std::cerr << "Error: too large number.\n";
		return (false);
	}
	std::stringstream(valueStr) >> num;
	if (num > static_cast<float>(1000)){
		std::cerr << "Error: too large number.\n";
		return (false);
	}
	return (true);
}

bool BitCoinExchange::checkDate(const std::string &dateStr) {
	int year, month, day;
	char separator;
	if (std::count(dateStr.begin(), dateStr.end(), '-') != 2) {
		std::cerr << "Error: Invalid format.\n";
		return (false);
	}
	std::istringstream ss(dateStr);
	ss >> year >> separator >> month >> separator >> day;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
		return (false);
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30)
			return (false);
	}
	else if (month == 2) {
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
			if (day > 29)
				return (false);
		}
		else {
			if (day > 28)
				return (false);
		}
	}
	return (true);
}

void BitCoinExchange::printExchangeRate(const std::string &key, float value){
	std::map<std::string, double>::iterator it = m_csvData.lower_bound(key);
	double	changeRate;
	if (it != m_csvData.end()) {
		if (it->first != key)
			--it;
		changeRate = (it->second);
	}
	else if (!m_csvData.empty()) {
		changeRate = ((--it)->second);
	}
	else {
		std::cerr << "Error: No exchange rate available for => ";
		std::cerr << key << '\n';
		return ;
	}
	std::cout << key << " => " << value << " = ";
	std::cout << value * changeRate << "\n";
	return ;
}

void BitCoinExchange::inputProcess(const std::string &pathFile){
	std::fstream file(pathFile.c_str());
	std::string line, date, value;
	double valueFloat;
	if (file.is_open()) {
		getline(file, line);
		if (line != "date | value") {
			std::cerr << "Error: Bad first line input => " << line << "\n";
			return ;
		}
		while (getline(file, line)) {
			if (this->firstCheck(line) == false)
				continue;
			date = line.substr(0,10);
			value = line.substr(13, 13 - line.size());
			if (this->checkValue(value) == false)
				continue;
			if (this->checkDate(date) == false) {
				std::cerr << "Error: Invalid date format\n";
				continue;
			}
			std::stringstream(value) >> valueFloat;
			printExchangeRate(date, valueFloat);
		}
		file.close();
	}
	else
		std::cerr << "Error: could not open file.\n";
	return ;
}
