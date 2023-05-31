#include <iostream>

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

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Rentre le bon nombre d'arguments \n" ;
		return (0);
	}
	argv++;
	function_cast(*argv);
	return (0);
}
