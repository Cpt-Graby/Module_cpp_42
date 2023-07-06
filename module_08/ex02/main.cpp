
#include "MutantStack.hpp"
#include <iostream>

void test_float();

int main()
{
	MutantStack<int> mstack;
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> s(mstack);
	test_float();
	return 0;
}

void test_float() {
	std::cout << "Debut des tests avec des float\n";
	MutantStack<float> mfstack;
	std::cout << "Size: " << mfstack.size() << std::endl;
	mfstack.push(5);
	mfstack.push(17);
	std::cout << mfstack.top() << std::endl;
	mfstack.pop();
	std::cout << "Size: " << mfstack.size() << std::endl;
	mfstack.push(3);
	mfstack.push(5);
	mfstack.push(737);
	mfstack.push(0);
	MutantStack<float>::iterator it = mfstack.begin();
	MutantStack<float>::iterator ite = mfstack.end();
	++it;
	--it;
	std::cout << "Fin des input\n";
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<float> s2(mfstack);

}
