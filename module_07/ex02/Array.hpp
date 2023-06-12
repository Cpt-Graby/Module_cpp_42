#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
	private:
		const unsigned int M_SIZEARRAY;
		T &tab;
	public:
		Array();
//		Array(unsigned int n);
//		Array(Array const & src);
//		Array & operator=(Array const & rhs);
//		Array & operator[](void);
		~Array();
//		unsigned int size(void) const;

};

template <typename T>
std::ostream & operator<<(std::ostream &o, Array<T> const & v);

#include "Array.tpp"
#endif
