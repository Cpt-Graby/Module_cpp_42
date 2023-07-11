#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

class PmergeMe {
	public:
		~PmergeMe();
		static void merge_sort(std::list<int>& arr);
		static void merge(std::list<int>& arr, std::list<int>& left, std::list<int>& right);
		static void merge_sort(std::vector<int>& arr);
		static void merge_sort(std::vector<int>& arr, int left, int right);
		static void merge(std::vector<int>& arr, int left, int mid, int right);
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
};

std::ostream &operator<<(std::ostream &o, PmergeMe &src);
#endif 
