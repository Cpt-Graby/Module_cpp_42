#include "ARRAY_HPP"

 template <typename T>
 Array<T>::Array(): M_SIZEARRAY(0), tabPointer(nullptr) {}

 template <typename T>
 Array<T>::Array(unsigned int n): M_SIZEARRAY(n), tabPointer(new T[n]) {}

template <typename T>
Array<T>::~Array() {
	if (tabPointer != nullptr)
		delete [] tabPointer;
}

template <typename T>
Array<T>::Array(Array const & src): M_SIZEARRAY(src.M_SIZEARRAY) {
	tabPointer = new T[M_SIZEARRAY];
	for (int i =0 ; i < M_SIZEARRAY; i++) {
		tabPointer[i] = src.tabPointer[i];
	}
}

template <typename T>
Array::operator=(Array const & rhs) {
	if (rhs != NULL)
		return *this;
}

template <typename T>
Array::operator[](const unsigned int i) {
	return (this->tabPointer[i]);
}

Array::size(void) {
	return (this->M_SIZEARRAY);
}
