
#include <cstdlib>
#include <ctime>
#include "Base.hpp"

Base * generate(void) {
	std::srand(time(NULL));
	int random = std::rand() % 3 + 1;

	std::cout << random << "\n";
	switch (random) {
		case (1):
			return (new A());
		case (2):
			return (new B());
		case (3):
			return (new C());
		default:
			return (new Base());
	}
	return (new Base());
}

void identify(Base *p){
	
	A * Aelement = dynamic_cast<A *>(p);
	if (Aelement != NULL) {
		std::cout << "Type A\n";
		return ;
	}
	B * Belement = dynamic_cast<B *>(p);
	if (Belement != NULL) {
		std::cout << "Type B\n";
		return ;
	}
	C * Celement = dynamic_cast<C *>(p);
	if (Celement != NULL) {
		std::cout << "Type C\n";
		return ;
	}
	return ;
}

void identify(Base &p) {
	try {
		(void) dynamic_cast<A &>(p);
		std::cout << "Type A\n";
		return ;
	}
	catch (std::exception &e) {}

	try {
		(void) dynamic_cast<B &>(p);
		std::cout << "Type B\n";
		return ;
	}
	catch (std::exception &e) {}

	try {
		(void) dynamic_cast<C &>(p);
		std::cout << "Type C\n";
		return ;
	}
	catch (std::exception &e) {}
}

int main() {
	Base *test= generate();

	identify(test);
	identify(*test);
	delete test;
}
