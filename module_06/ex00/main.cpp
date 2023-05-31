#include <iostream>
#include <limits>

// We will use the fonction of std::stod
// https://cplusplus.com/reference/string/stod/
void function_cast(std::string arg)
{
	float value_str = stof(arg);

	std::cout << "int: " << stoi(arg) << "\n";
	std::cout << "float: " << stof(arg) << "f\n";
	std::cout << "double: " << stod(arg) << "\n";
	return ;
}
void printSpecialTerm(const int indexMatch, const std::string tab[6]) {
	std::cout << "char: impossible\n" ;
	std::cout << "int: impossible\n" ;
	switch (indexMatch) {
		case (0): 
		case (1): 
			std::cout << "float: " << std::numeric_limits<float>::infinity() << "\n";
			std::cout << "double: " << std::numeric_limits<double>::infinity() << "\n";
			break;
		case (2): 
		case (3): 
			break;
		case (4): 
		case (5): 
			break;
		default:
			return ;
	}
	return ;
}

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Rentre le bon nombre d'arguments \n" ;
		return (0);
	}
	argv++;
	
	const std::string specialTerm[6] = {"-inff", "-inf", "inff", "inf", "nanf", "nan"};
	int	match = 7;

	for (int i = 0; i < 6; i++) {
		if (*argv == specialTerm[i])
			match = i;
	}
	if (match != 7)
		function_cast(*argv);
	else
		printSpecialTerm(match, specialTerm);
	return (0);
}
