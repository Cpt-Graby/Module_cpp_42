
#include "iter.hpp"
#include <iostream>

class Awesome {
	private:
		int _n;
	public:
		Awesome(void):_n(42) {return ;}
		int get(void) const {return this->_n;}
};

template <typename T>
void print( T const &i){
	std::cout << i << "\n";
	return ;
}

int main( void ) {
	int tab[] = {0,1,2,3,4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);
	/*
	int *newTab = new int[5];
	for (int i = 0; i < 5; i++){
		newTab[i] = i;
	}
	iter(newTab, 5, print);
	return 0;
	*/
}
