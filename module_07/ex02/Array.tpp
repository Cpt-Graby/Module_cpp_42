#ifndef ARRAY_TPP
# define ARRAY_TPP

 template <typename T>
 Array<T>::Array(): m_sizearray(0), tabPointer(NULL) {}

 template <typename T>
Array<T>::Array(unsigned int n): m_sizearray(n), tabPointer(new T[n]) {}

template <typename T>
Array<T>::~Array() {
	if (tabPointer != NULL)
		delete [] tabPointer;
}

template <typename T>
Array<T>::Array(const Array & src): m_sizearray(src.m_sizearray) {
	tabPointer = new T[m_sizearray];
	for (int i =0 ; i < m_sizearray; i++) {
		tabPointer[i] = src.tabPointer[i];
	}
}

template <typename T>
Array<T>&  Array<T>::operator=(const Array & rhs) {
	if (rhs != NULL && rhs.m_sizearray > 0) {
		delete [] this->tabPointer;
		this->tabPointer = new T[rhs.m_sizearray];
		this->m_sizearray = rhs.m_sizearray;
		for (int i = 0; i < this->m_sizearray; i++) {
			this->tabPointer[i] = rhs.tabPointer[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](const unsigned int i) {
	if (i >= this->m_sizearray)
		throw std::out_of_range("Invalid Index");
	return (this->tabPointer[i]);
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return (this->m_sizearray);
}

/*
template <typename T>
std::ostream& operator<<(std::ostream &o, const Array<T>& src) {
	unsigned int t_size = src.size();
	for (unsigned int i = 0; i < t_size; i++) {
		o << "i: " << src.tabPointer[i] << "\n";
	}
	return o;
}
*/

#endif
