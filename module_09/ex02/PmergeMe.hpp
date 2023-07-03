#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
		~PmergeMe();
};

std::ostream &operator<<(std::ostream &o, PmergeMe &src);
#endif 
