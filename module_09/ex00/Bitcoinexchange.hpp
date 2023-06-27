#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitCoinExchange {
	private:
	BitCoinExchange();
	void inputProcess(const std::string &inputPath);
	std::map<std::string, int> m_csvData;
	public:
	BitCoinExchange(const std::string &dataPath);
	BitCoinExchange(const BitCoinExchange &rhs);
	BitCoinExchange &operator=(const BitCoinExchange &rhs);
	~BitCoinExchange();

};
#endif
