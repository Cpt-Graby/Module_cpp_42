#include <iostream>

void castChar(std::string arg)
{
	if (arg == "nan")
		std::cout << "char: impossible\n" ;
	
	return ;
}

void function_cast(std::string arg)
{
	castChar(arg);
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
	std::string arg_cast(*argv);
	function_cast(arg_cast);
	return (0);
}
