#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitCoinExchange {
	private:
		std::map<std::string, double> m_csvData;
		BitCoinExchange();
		BitCoinExchange &operator=(const BitCoinExchange &rhs);
		BitCoinExchange(const BitCoinExchange &rhs);
		bool firstCheck(const std::string &inputLine);
		bool checkDate(const std::string &dateStr);
		bool checkValue(const std::string &valueStr);
		void printExchangeRate(const std::string &key, float value);
	public:
		BitCoinExchange(const std::string &dataPath);
		~BitCoinExchange();
		void inputProcess(const std::string &inputPath);
};
#endif
