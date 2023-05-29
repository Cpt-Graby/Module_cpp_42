#include <iostream>

void function_cast(std::string arg)
{

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
