#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
	private:
		const unsigned int M_SIZEARRAY;
		T * tabPointer;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		Array & operator=(Array const & rhs);
		T & operator[](const unsigned int i);
		~Array();
		unsigned int size(void) const;

};

template <typename T>
std::ostream & operator<<(std::ostream &o, Array<T> const & v);

#endif
