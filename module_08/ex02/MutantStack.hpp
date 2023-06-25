#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
	private:

	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &rhs);
		MutantStack & operator=(const MutantStack &rhs);

		typedef typename Container::iterator iterator;

		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif
