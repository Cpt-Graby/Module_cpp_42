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
	BitCoinExchange();
	BitCoinExchange &operator=(const BitCoinExchange &rhs);
	BitCoinExchange(const BitCoinExchange &rhs);
	std::map<std::string, double> m_csvData;
	bool firstCheck(const std::string &inputLine);
	public:
	BitCoinExchange(const std::string &dataPath);
	~BitCoinExchange();
	void inputProcess(const std::string &inputPath);

};
#endif
