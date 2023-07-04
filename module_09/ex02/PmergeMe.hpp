#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

class PmergeMe {
	public:
		~PmergeMe();
		static void insertMergeSort(std::vector<unsigned int> &t_vector);
		static void insertMergeSort(std::list<unsigned int> &t_list);
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
};

std::ostream &operator<<(std::ostream &o, PmergeMe &src);
#endif 
