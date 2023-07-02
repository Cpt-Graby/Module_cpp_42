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
		char m_cNumber;
		int m_iNumber;
		float m_fNumber;
		double m_dNumber;
		bool m_boolC;
		bool m_boolI;
		bool m_boolF;
		bool m_boolD;
		bool m_boolInf;
		bool m_boolInp;
		// Checking for special term like: nan, nanf, inf and so on.
		int checkSpecialTerm(void);
		void printSpecialTerm(const int indexMatch);
		// Functions to determine the type of the string;
		bool isValidInput(std::string &input) const ;
		bool isInt(std::string &input) const;
		bool isChar(std::string &input) const;
		bool isDouble(std::string &input) const;
		// Function to print once the char is determined
		void printFromDouble();
		void printFromChar();
		void printFromInt();
		void printFromFloat();
	public:
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter &rhs);
		ScalarConverter &operator=(const ScalarConverter &rhs);
		ScalarConverter(char *arg);
		void convert(const std::string &t_input);
};

#endif
