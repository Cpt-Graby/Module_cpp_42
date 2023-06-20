#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N): m_qtyElement(0){
	if (N < m_tab.max_size()) 
		m_maxSize = N;
	else {
		m_maxSize = m_tab.max_size();
		std::cout << "max size has been set to: " << m_maxSize << "\n";
	}
}

Span::~Span() {}

void Span::addNumber(int i) {
	if (m_qtyElement >= m_maxSize)
		throw NoRoomLeftExcept();
	m_tab.push_back(i);
	m_qtyElement++;
}

unsigned int Span::longestSpan() {
	m_qtyElement = m_tab.size();
	if (m_qtyElement < 2)
		throw NoDistanceExcept();
	int max = *std::max_element(m_tab.begin(), m_tab.end());
	int min = *std::min_element(m_tab.begin(), m_tab.end());
	return (max - min);
}

unsigned int Span::shortestSpan() {
	m_qtyElement = m_tab.size();
	if (m_qtyElement < 2)
		throw NoDistanceExcept();
	unsigned int min = this->longestSpan();
	unsigned int tmp_min;
	std::vector<int> tmp = m_tab;
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::const_iterator it = tmp.begin(); it != tmp.end(); ++it) {
		for (std::vector<int>::const_iterator it2 = it; it2 != tmp.end(); ++it2) {
			if (*it == *it2)
				continue;
			tmp_min = *it2 - *it;
			if (tmp_min < min)
				min = tmp_min;
		}
	}
	return (min);
}
