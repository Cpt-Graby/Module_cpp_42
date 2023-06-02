#include <iostream>
#include <limits>

// We will use the fonction of std::stod
// https://cplusplus.com/reference/string/stod/
void printSpecialTerm(const int indexMatch);
void functionCast(double dNumber);

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Rentre le bon nombre d'arguments \n" ;
		return (0);
	}
	argv++;
	
	const std::string specialTerm[8] = {"-inff", "-inf", "inff", "inf",
		"+inff", "+inf", "nanf", "nan"};
	int	match = 7;

	for (int i = 0; i < 6; i++) {
		if (*argv == specialTerm[i])
			match = i;
	}
	std::string test (*argv);
	if (match == 7 ) {
		try {
			std::string::size_type sz;
			double doubleNumber = std::stod(*argv, &sz);
			/*
			std::cout << "test: " << doubleNumber << "\n";
			*/
			std::cout << "sz: " << test.substr(sz) << "\n";
			functionCast(doubleNumber);
		}
		catch ( const std::invalid_argument& ia ) {
			std::cerr << "Invalid argument: " << ia.what() << "\n";
			return (1);
		}
	}
	else {
		printSpecialTerm(match);
	}
	return (0);
}

void functionCast(double dNumber) {
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
		int iNumber = static_cast<char>(dNumber);
		std::cout << "int: " << iNumber << "\n";
		std::cout << "float: " << static_cast<float>(dNumber) << "f\n";
		std::cout << "double: " << dNumber << "\n";
		return ;
	}
	else
		std::cout << "int: impossible \n";
	// ----------- case float
	if ( dNumber >= std::numeric_limits<float>::min() &&  
			dNumber <= std::numeric_limits<float>::max()) {
		float fNumber = static_cast<float>(dNumber);
		std::cout << "float: " << fNumber << "f\n";
		std::cout << "double: " << dNumber << "\n";
		return ;
	}
	else {
		std::cout << "float: impossible \n";
		std::cout << "double: " << dNumber << "\n";
	}
	return ;
}

void printSpecialTerm(const int indexMatch) {
	std::cout << "char: impossible\n" ;
	std::cout << "int: impossible\n" ;
	switch (indexMatch) {
		case (0): 
		case (1): 
			std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f\n";
			std::cout << "double: " << -std::numeric_limits<double>::infinity() << "\n";
			break;
		case (2): 
		case (3): 
		case (4): 
		case (5): 
			std::cout << "float: " << std::numeric_limits<float>::infinity() << "f\n";
			std::cout << "double: " << std::numeric_limits<double>::infinity() << "\n";
			break;
		case (6): 
		case (7): 
			std::cout << "float: " << std::numeric_limits<double>::quiet_NaN() << "f\n";
			std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << "\n";
			break;
		default:
			return ;
	}
	return ;
}

