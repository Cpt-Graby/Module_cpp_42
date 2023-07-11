#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

class PmergeMe {
	public:
		~PmergeMe();
		static void MergeInsertionSort(std::vector<unsigned int> & t_vec);
		static void initRecursiveSplit(std::vector<unsigned int> &left, std::vector<unsigned int> &right);
		static void swapElementVector(std::vector<unsigned int> &left, std::vector<unsigned int> &right);
		static void binaryInsert(std::vector<unsigned int> &top, std::vector<unsigned int> &toAdd);
		static void binaryInsertValue(std::vector<unsigned int> &top, const unsigned int value);
		static void binaryInsertValueRestricted(std::vector<unsigned int> &top, const unsigned int value, const unsigned int numAdded);

		/*
		static void PmergeMe::splitElement(std::vector<int> & vec, std::vector<int>& indexes);
		static void	PmergeMe::splitVec(std::vector<int> & t_vec);
		static void	PmergeMe::sortVec(std::vector<int> & t_vec);
		static void	PmergeMe::recurSortVec(std::vector<int>& vec, std::vector<int>& indexes);
		static void	PmergeMe::rearrangeVec(std::vector<int>& vec, std::vector<int>& indexes);
		static void	PmergeMe::binaryInsertVec(std::vector<int>& vecMain, std::vector<int>& vecPend, std::vector<int>& indMain, std::vector<int>& indPend);
		*/
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
};

std::ostream &operator<<(std::ostream &o, PmergeMe &src);
#endif 
