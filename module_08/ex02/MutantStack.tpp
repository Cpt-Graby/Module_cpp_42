#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T, typename Container = std::deque<T> >
MutantStack<T, Conatiner>::MutantStack(const MutantStack &rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

template <typename T, typename Container = std::deque<T> >
MutantStack<T, Conatiner>&::operator=(const MutantStack &rhs) {
	std::stack<T, Constainer>::operator=(rhs);
	return (*this);
}

template <typename T, typename Container = std::deque<T> >
MutantStack::iterator::begin(void) {
	return this->c.begin();
}

template <typename T, typename Container = std::deque<T> >
MutantStack::iterator::end(void) {
	return this->c.end();
}

#endif
