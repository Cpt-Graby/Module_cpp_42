#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    // Constructeurs
    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack<T, Container>& other) : std::stack<T, Container>(other) {
	}

    // Destructeur
    ~MutantStack() {}

    // Opérateur d'assignation
    MutantStack<T, Container>& operator=(const MutantStack<T, Container>& other)
    {
		std::stack< T, Container >::operator=(other);
        return *this;
    }

    // Itérateurs
    iterator begin() { return std::stack<T, Container>::c.begin(); }
    iterator end() { return std::stack<T, Container>::c.end(); }

    const_iterator begin() const { return std::stack<T, Container>::c.begin(); }
    const_iterator end() const { return std::stack<T, Container>::c.end(); }
};

#endif // MUTANTSTACK_HPP
