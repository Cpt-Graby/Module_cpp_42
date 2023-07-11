#include "PmergeMe.hpp"


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
void PmergeMe::binaryInsertValue(std::vector<unsigned int> &top,
		unsigned int value) {

	std::vector<unsigned int>::iterator insertPlace = std::lower_bound(top.begin(), 
			top.end(), value);
	top.insert(insertPlace, value);
	return ;
}

void PmergeMe::binaryInsertValueRestricted(std::vector<unsigned int> &top,
		unsigned int value, const unsigned int numAdded) {

	size_t max = numAdded * 2 + 1;
	std::vector<unsigned int>::iterator insertPlace = std::lower_bound(top.begin(), 
			top.begin() + max, value);
	top.insert(insertPlace, value);
	return ;
}

void PmergeMe::binaryInsert(std::vector<unsigned int> &top, std::vector<unsigned int> &toAdd) {
	if (toAdd.empty())
		return ;
	unsigned int numAddElement = 1;
	for (std::vector<unsigned int>::iterator it = toAdd.begin(); it != toAdd.end(); ++it) {
		PmergeMe::binaryInsertValueRestricted(top, *it, numAddElement);
		++numAddElement;
	}
	toAdd.erase(toAdd.begin(), toAdd.end());
	return ;
}

void PmergeMe::swapElementVector(std::vector<unsigned int> &leftVec, std::vector<unsigned int> &rightVec) {
	if (leftVec.size() != rightVec.size()) {
		std::cout << "Error size\n";
		return ;
	}
	std::vector<unsigned int>::iterator rightIt = rightVec.begin();
	for (std::vector<unsigned int>::iterator it = leftVec.begin(); it != leftVec.end(); ++it) {
		if (*it < *rightIt) {
			std::iter_swap(it, rightIt);
		}
		++rightIt;
	}
	return ;
}
void PmergeMe::initRecursiveSplit(std::vector<unsigned int> &left, std::vector<unsigned int> &right) {
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
	PmergeMe::binaryInsert(right, tmpRight);

	PmergeMe::initRecursiveSplit(left, tmpRight);
	PmergeMe::binaryInsert(left, tmpRight);

	PmergeMe::binaryInsert(left, right);

	if (sizeVec % 2 != 0) {
		PmergeMe::binaryInsertValue(left, tmp);
	}
}
/*
void	PmergeMe::sortVec(std::vector<int> &t_vec)
{
	std::vector<int> vec = t_vec; 
	std::vector<int> indexes;

	PmergeMe::recurSortVec(vec, indexes); // recursively sort copy
	t_vec = vec; 
	return ;
}

void	PmergeMe::recurSortVec(std::vector<int>& vec, std::vector<int>& indexes)
{
	bool isFirstCall = indexes.empty();
	// Base case (length 1, do nothing)
	if (vec.size() == 1)
		return ;
	std::vector<int>::iterator	it1 = vec.begin(); // points to beginning of first segment
	std::vector<int>::iterator	it2 = it1 + vec.size() / 2; // point to begin. of second segment
	std::vector<int>::iterator	itInd1; // same for index sequence
	std::vector<int>::iterator	itInd2;
	if (!isFirstCall)
	{
		itInd1 = indexes.begin(); // same for index sequence
		itInd2 = itInd1 + vec.size() / 2;
	}
	
	for (unsigned long j = 0; j < vec.size() / 2; j++)
	{
		if (*it2 > *it1)
		{
			std::iter_swap(it1, it2);
			if (!isFirstCall)
				std::iter_swap(itInd1, itInd2);
		}
		it1++;
		it2++;
		if (!isFirstCall)
		{
			itInd1++;
			itInd2++;
		}
	}
	
	// Split main and pend parts for both vec and Indexes
	std::vector<int> vecMain(vec.begin(), vec.begin() + vec.size() / 2);
	std::vector<int> vecPend(vec.begin() + vec.size() / 2, vec.end());
	std::vector<int> indMain;
	std::vector<int> indPend;
	if (!isFirstCall)
	{
		indMain.insert(indMain.end(), indexes.begin(), indexes.begin() + vec.size() / 2);
		indPend.insert(indPend.end(), indexes.begin() + vec.size() / 2, indexes.end());
	}
	
	//DEBUG
	if (VERBOSE && isFirstCall)
	{
		std::cout << "Splitted Vec into main chain and pend chain + pair swap:" << std::endl;
		PmergeMe::printVec(vecMain);
		PmergeMe::printVec(vecPend);
	}

	std::vector<int> subIndexes;
	for (unsigned long i = 0; i < vecMain.size(); i++)
		subIndexes.push_back(i);
	PmergeMe::_recurSortVec(vecMain, subIndexes);
	PmergeMe::_rearrangeVec(vecPend, subIndexes);
	if (!isFirstCall)
	{
		PmergeMe::_rearrangeVec(indMain, subIndexes);
		PmergeMe::_rearrangeVec(indPend, subIndexes);
	}

	// DEBUG
	if (VERBOSE && isFirstCall)
	{
		std::cout << "\nMain and pend and after recursive sort:" << std::endl;
		PmergeMe::printVec(vecMain);
		PmergeMe::printVec(vecPend);
	}
	PmergeMe::_binaryInsertVec(vecMain, vecPend, indMain, indPend);
	vec = vecMain;
	indexes = indMain;

	return ;	
}

void	PmergeMe::_rearrangeVec(std::vector<int>& vec, std::vector<int>& indexes)
{
	std::vector<int> vecCopy = vec;
	for (unsigned long i = 0; i < indexes.size(); i++)
		vec[i] = vecCopy[indexes[i]];
	return ;
}

// Binary insert with jacobsthal sequence
void	PmergeMe::_binaryInsertVec(std::vector<int>& vecMain, std::vector<int>& vecPend,
	std::vector<int>& indMain, std::vector<int>& indPend)
{
	bool isFirstCall = indMain.empty();

	std::vector<unsigned long>	jacob;
	std::vector<long>			maxChainSize; // to insert into
	unsigned long				jacobPrev = 1;
	long						insertSize; // size of chain to insert into
	std::vector<int>::iterator	it; // position before which to insert
	
	jacob.push_back(1);
	maxChainSize.push_back(1);
	// Generate needed Jacobsthal sequence and maxChainSize
	while (jacob.back() < vecPend.size())
	{
		jacob.push_back(jacob.back() + 2 * jacobPrev);
		jacobPrev = *(jacob.end() - 2);
		maxChainSize.push_back((maxChainSize.back() + 1) * 2 - 1); //2^n - 1
	}

	for (unsigned long j = 0; j < jacob.size(); j++)
	{
		jacobPrev = (jacob[j] == 1) ? 0 : jacob[j - 1];
		for (unsigned long i = jacob[j]; i > jacobPrev; i--)
		{
			if (i > vecPend.size())
				continue ;
			
			insertSize = std::min(vecMain.end() - vecMain.begin(), maxChainSize[j]);
			if (VERBOSE && isFirstCall)	
				std::cout << "\nInserting pend element " <<  vecPend[i - 1] 
					<< " into sub main chain of length " << insertSize << ":" << std::endl;
			
			// Very first insert need no comparison
			if (i == 1)
			{
				it = vecMain.begin();	
			}
			else // Lower_bound performs binary search
			{
				it = std::lower_bound(vecMain.begin(), 
					vecMain.begin() + insertSize, vecPend[i - 1]); // need 2nd it to pass bound
			}

			if (!isFirstCall)
				indMain.insert(indMain.begin() + std::distance(vecMain.begin(), it), indPend[i - 1]);
			vecMain.insert(it, vecPend[i - 1]);
			
			if (VERBOSE && isFirstCall)
			{
				PmergeMe::printVec(vecMain);
				PmergeMe::printVec(vecPend);
			}
		}
	}
	return ;
}
*/
