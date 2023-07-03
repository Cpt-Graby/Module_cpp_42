#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <iomanip>
#include <cfloat>
#include <cstdlib>

class ScalarConverter {
	private:
		ScalarConverter(void);
		// Value
		std::string m_input;
		// Checking for special term like: nan, nanf, inf and so on.
		ScalarConverter(const ScalarConverter &rhs);
		ScalarConverter &operator=(const ScalarConverter &rhs);
		ScalarConverter(char *arg);
	public:
		~ScalarConverter(void);
		static void convert(const std::string &t_input);
		static int checkSpecialTerm(const std::string t_input);
		static void printSpecialTerm(const int indexMatch);
		// Functions to determine the type of the string;
		static bool isValidInput(std::string input) ;
		static bool isInt(std::string input);
		static bool isChar(std::string input);
		static bool isDouble(std::string input);
		// Function to print once the char is determined
		static void printFromDouble(const std::string &input);
		static void printFromChar(const std::string &input);
		static void printFromInt(const std::string &input);
		static void printFromFloat(const std::string &input);
};

#endif
