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


