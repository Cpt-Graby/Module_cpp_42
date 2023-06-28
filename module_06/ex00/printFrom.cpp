#include <iostream>
#include <iomanip>
#include <limits>
#include <climits>
#include <sstream>
#include <cstdlib>
#include <cfloat>

void printFromInt(std::string &input) {
	int iNumber = std::atoi(input.c_str());
	if (iNumber >=32 && iNumber < 127)
		std::cout << "char: '" << static_cast<char>(iNumber) << "'\n";
	else if (iNumber < 32 && iNumber >= 0)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: Impossible\n";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "int: " << iNumber << "\n";
	std::cout << "float: " << static_cast<float>(iNumber) << "f\n";
	std::cout << "double: " << static_cast<double>(iNumber) << std::endl;
	return ;
}

void printFromChar(std::string &input) {
	char cNumber = input[0];
	
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char: '" << cNumber << "'\n";
	std::cout << "int: " << static_cast<int>(cNumber) << "\n";
	std::cout << "float: " << static_cast<float>(cNumber) << "f\n";
	std::cout << "double: " << static_cast<double>(cNumber) << std::endl;
	return ;
}


void printFromFloat(std::string &input) {
//	float fNumber = static_cast<float>(std::atof(input.c_str()));
	std::stringstream ss(input.substr(0, input.size() - 1));
	float fNumber; 
	ss >> fNumber;
	std::cout << std::fixed << std::setprecision(1);
	// ----------- case char
	if ( fNumber >= std::numeric_limits<char>::min() &&  
			fNumber <= std::numeric_limits<char>::max()) {
		char cNumber = static_cast<char>(fNumber);
		if ( cNumber < 32 || cNumber > 126)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << cNumber << "'\n";
	}
	else
		std::cout << "char: impossible \n";
	// ----------- case int
	if (fNumber >= std::numeric_limits<int>::min() &&
			fNumber <= (std::numeric_limits<int>::max())) {
		std::cout << "int: " << static_cast<int>(fNumber) << "\n";
	}
	else
		std::cout << "int: impossible \n";
	// ----------- case float
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << fNumber << "f\n";
	std::cout << "double: " << static_cast<double>(fNumber) << "\n";
	return ;
}

double sendDouble(std::string &input)
{
	try {
		double dNumber; 
		std::stringstream(input) >> dNumber;
		return (dNumber);
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
		exit(1);
	}
}

void printFromDouble(std::string &input) {
	double dNumber(sendDouble(input));
	std::cout << std::fixed << std::setprecision(1);
	// ----------- case char
	if ( dNumber >= std::numeric_limits<char>::min() &&  
			dNumber <= std::numeric_limits<char>::max()) {
		char cNumber = static_cast<char>(dNumber);
		if ( cNumber < 32 || cNumber > 126)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << cNumber << "'\n";
	}
	else
		std::cout << "char: impossible \n";
	// ----------- case int
	if ( dNumber >= std::numeric_limits<int>::min() &&  
			dNumber <= std::numeric_limits<int>::max()) {
		std::cout << "int: " << static_cast<int>(dNumber) << "\n";
	}
	else
		std::cout << "int: impossible \n";
	// ----------- case float
	if ( dNumber >= -FLT_MAX &&  
			dNumber <= std::numeric_limits<float>::max()) {
		float fNumber = static_cast<float>(dNumber);
		std::cout << "float: " << fNumber << "f\n";
	}
	else {
		std::cout << "float: impossible \n";
	}
	std::cout << "double: " << dNumber << "\n";
	return ;
}
