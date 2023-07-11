#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {
	public:
		~PmergeMe();
		static void MergeInsertionSort(std::vector<unsigned int> & t_vec);
		static void initRecursiveSplit(std::vector<unsigned int> &left, std::vector<unsigned int> &right);
		static void swapElementVector(std::vector<unsigned int> &left, std::vector<unsigned int> &right);
		static void binaryInsert(std::vector<unsigned int> &top, std::vector<unsigned int> &toAdd);
		static void binaryInsertValue(std::vector<unsigned int> &top, const unsigned int value);
		static void binaryInsertValueRestricted(std::vector<unsigned int> &top, const unsigned int value, const unsigned int numAdded);

		static void MergeInsertionSort(std::deque<unsigned int> & t_vec);
		static void initRecursiveSplit(std::deque<unsigned int> &left, std::deque<unsigned int> &right);
		static void swapElementVector(std::deque<unsigned int> &left, std::deque<unsigned int> &right);
		static void binaryInsert(std::deque<unsigned int> &top, std::deque<unsigned int> &toAdd);
		static void binaryInsertValue(std::deque<unsigned int> &top, const unsigned int value);
		static void binaryInsertValueRestricted(std::deque<unsigned int> &top, const unsigned int value, const unsigned int numAdded);
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
};

std::ostream &operator<<(std::ostream &o, PmergeMe &src);
#endif 
