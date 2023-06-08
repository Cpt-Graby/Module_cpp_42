

#include "iter.hpp"
#include <iostream>

void print( int &i){
	std::cout << i << "\n";
}

int main( void ) {
	int *newTab = new int[5];
	for (int i = 0; i < 5; i++){
		newTab[i] = i;
	}
	iter(newTab, 5, print);
	return 0;
}
