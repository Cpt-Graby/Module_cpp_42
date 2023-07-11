#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include "PmergeMe.hpp"

bool inputToStorage(std::vector<unsigned int> *t_vec, 
		std::list<unsigned int> *t_li, char **t_arg)
{
	std::string			input(t_arg[1]);
	std::stringstream	ss;
	unsigned int		num;

	for (int i = 1; t_arg[i] != NULL; ++i) {
		input = t_arg[i];
		if (input.find_first_not_of("0123456789") != std::string::npos)
			return (false);
		if (input.size() >= 10 && input.compare("4294967295") > 0)
			return (false);
		ss << t_arg[i] << " ";
	}

	while (ss >> num) {
		t_vec->push_back(num);
		t_li->push_back(num);
	}
	return (true);
}

void printUnsortedContent(char **t_argv) {
	std::cout << "Before : ";
	for (int i = 1; t_argv[i] != NULL; ++i) {
		std::cout << " " << t_argv[i];
	}
	std::cout << "\n";
}

void printsortedContent(std::vector<unsigned int> t_vec) {
	std::cout << "After : ";
	for (std::vector<unsigned int>::iterator i = t_vec.begin(); i != t_vec.end(); ++i) {
		std::cout << *i << " ";
	}
	std::cout << "\n";
}

int main(int argc, char **argv) {
	std::vector<unsigned int>	t_vector;
	std::list<unsigned int>		t_list;

	if (argc <= 2) {
		std::cout << "Error : Not enough input sequence." << std::endl;
		return (1);
	}
	if (inputToStorage(&t_vector, &t_list, argv) == false) {
		std::cout << "Error: Invalid Input\n";
		return (1);
	}
	printUnsortedContent(argv);
	PmergeMe::MergeInsertionSort(t_vector);
	printsortedContent(t_vector);
	return (0);
}
