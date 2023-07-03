
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter( T *tab, size_t const sizeTab, void (*f)(T& arg)) {
	for (size_t i = 0; i < sizeTab; i++){
		(*f)(tab[i]);
	}
}

#endif
