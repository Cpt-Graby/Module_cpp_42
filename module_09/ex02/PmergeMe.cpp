#include "PmergeMe.hpp"


// IMPLEMENTATION POUR VECTOR
void PmergeMe::MergeInsertionSort(std::vector<unsigned int> & t_vec) {
	std::vector<unsigned int> left = t_vec; 
	std::vector<unsigned int> right; 
	size_t sizeVec = t_vec.size();
	if (sizeVec == 1)
		return ;
	else {
		PmergeMe::initRecursiveSplit(left, right);
	}
	t_vec = left;
	return ;
}

/* Cette function realise la premiere etape de l'algorithm decrit sur
 * cette page: https://en.wikipedia.org/wiki/Merge-insertion_sort
 * */
void PmergeMe::initRecursiveSplit(std::vector<unsigned int> &left,
		std::vector<unsigned int> &right)
{
	std::vector<unsigned int> tmpRight; 

	size_t sizeVec = left.size();
	unsigned int tmp = left.back();

	if (sizeVec == 1)
		return ;
	if (sizeVec % 2 != 0) {
		right.assign(left.begin() + sizeVec / 2, left.end() - 1);
		left.erase(left.begin() + sizeVec / 2, left.end());
	}
	else {
		right.assign(left.begin() + sizeVec / 2, left.end());
		left.erase(left.begin() + sizeVec / 2, left.end());
	}
	PmergeMe::swapElementVector(left, right);

	PmergeMe::initRecursiveSplit(right, tmpRight);
	if (!tmpRight.empty())
		PmergeMe::binaryInsert(right, tmpRight);

	PmergeMe::initRecursiveSplit(left, tmpRight);
	if (!tmpRight.empty())
		PmergeMe::binaryInsert(left, tmpRight);
	if (!right.empty()) {
		PmergeMe::binaryInsert(left, right);
	}

	if (sizeVec % 2 != 0) {
		PmergeMe::binaryInsertValue(left, tmp);
	}
}

void PmergeMe::swapElementVector(std::vector<unsigned int> &leftVec,
		std::vector<unsigned int> &rightVec)
{
	if (leftVec.size() != rightVec.size()) {
		std::cout << "Error size\n";
		return ;
	}
	std::vector<unsigned int>::iterator rightIt = rightVec.begin();
	for (std::vector<unsigned int>::iterator it = leftVec.begin();
		it != leftVec.end(); ++it) {
		if (*it < *rightIt) {
			std::iter_swap(it, rightIt);
		}
		++rightIt;
	}
	return ;
}

void PmergeMe::binaryInsertValue(std::vector<unsigned int> &top,
		unsigned int value)
{
	std::vector<unsigned int>::iterator insertPlace = std::lower_bound(top.begin(), 
			top.end(), value);
	top.insert(insertPlace, value);
	return ;
}

/* Ensemble des fonctions utiles une fois les elements du split cree
 * et repartie entre pair
 * */

void PmergeMe::binaryInsertValueRestricted(std::vector<unsigned int> &top,
		unsigned int value, const unsigned int numAdded) {

	size_t max = numAdded * 2 + 1;
	std::vector<unsigned int>::iterator insertPlace = std::lower_bound(top.begin(), 
			top.begin() + max, value);
	top.insert(insertPlace, value);
	return ;
}

// IMPLEMENTATION POUR DEQUE
// cette partie est identique a la precedente

void PmergeMe::binaryInsert(std::vector<unsigned int> &top, std::vector<unsigned int> &toAdd) {
	if (toAdd.empty())
		return ;
	unsigned int numAddElement = 0;
	if (toAdd.size() == 1) {
		top.insert(top.begin(), toAdd.back());
		toAdd.erase(toAdd.begin(), toAdd.end());
		return ;
	}
	for (std::vector<unsigned int>::iterator it = toAdd.begin(); it != toAdd.end(); ++it) {
		PmergeMe::binaryInsertValueRestricted(top, *it, numAddElement);
		++numAddElement;
	}
	toAdd.erase(toAdd.begin(), toAdd.end());
	return ;
}

void PmergeMe::MergeInsertionSort(std::deque<unsigned int> & t_vec) {
	std::deque<unsigned int> left = t_vec; 
	std::deque<unsigned int> right; 
	size_t sizeVec = t_vec.size();
	if (sizeVec == 1)
		return ;
	else {
		PmergeMe::initRecursiveSplit(left, right);
	}
	t_vec = left;
	return ;
}

/* Cette function realise la premiere etape de l'algorithm decrit sur
 * cette page: https://en.wikipedia.org/wiki/Merge-insertion_sort
 * */
void PmergeMe::initRecursiveSplit(std::deque<unsigned int> &left,
		std::deque<unsigned int> &right)
{
	std::deque<unsigned int> tmpRight; 

	size_t sizeVec = left.size();
	unsigned int tmp = left.back();

	if (sizeVec == 1)
		return ;
	if (sizeVec % 2 != 0) {
		right.assign(left.begin() + sizeVec / 2, left.end() - 1);
		left.erase(left.begin() + sizeVec / 2, left.end());
	}
	else {
		right.assign(left.begin() + sizeVec / 2, left.end());
		left.erase(left.begin() + sizeVec / 2, left.end());
	}
	PmergeMe::swapElementVector(left, right);

	PmergeMe::initRecursiveSplit(right, tmpRight);
	PmergeMe::binaryInsert(right, tmpRight);

	PmergeMe::initRecursiveSplit(left, tmpRight);
	PmergeMe::binaryInsert(left, tmpRight);

	PmergeMe::binaryInsert(left, right);

	if (sizeVec % 2 != 0) {
		PmergeMe::binaryInsertValue(left, tmp);
	}
}

void PmergeMe::swapElementVector(std::deque<unsigned int> &leftVec,
		std::deque<unsigned int> &rightVec)
{
	if (leftVec.size() != rightVec.size()) {
		std::cout << "Error size\n";
		return ;
	}
	std::deque<unsigned int>::iterator rightIt = rightVec.begin();
	for (std::deque<unsigned int>::iterator it = leftVec.begin();
		it != leftVec.end(); ++it) {
		if (*it < *rightIt) {
			std::iter_swap(it, rightIt);
		}
		++rightIt;
	}
	return ;
}

void PmergeMe::binaryInsertValue(std::deque<unsigned int> &top,
		unsigned int value)
{
	std::deque<unsigned int>::iterator insertPlace = std::lower_bound(top.begin(), 
			top.end(), value);
	top.insert(insertPlace, value);
	return ;
}


/* Ensemble des fonctions utiles une fois les elements du split cree
 * et repartie entre pair
 * */

void PmergeMe::binaryInsertValueRestricted(std::deque<unsigned int> &top,
		unsigned int value, const unsigned int numAdded) {

	size_t max = numAdded * 2 + 1;
	std::deque<unsigned int>::iterator insertPlace = std::lower_bound(top.begin(), 
			top.begin() + max, value);
	top.insert(insertPlace, value);
	return ;
}

void PmergeMe::binaryInsert(std::deque<unsigned int> &top, std::deque<unsigned int> &toAdd) {

	if (toAdd.empty())
		return ;
	unsigned int numAddElement = 0;
	if (toAdd.size() == 1) {
		top.insert(top.begin(), toAdd.back());
		toAdd.erase(toAdd.begin(), toAdd.end());
		return ;
	}
	for (std::deque<unsigned int>::iterator it = toAdd.begin(); it != toAdd.end(); ++it) {
		PmergeMe::binaryInsertValueRestricted(top, *it, numAddElement);
		++numAddElement;
	}
	toAdd.erase(toAdd.begin(), toAdd.end());
	return ;
}

