#include <iostream>

int main(int argc, char **argv) {
	(void) argv;
	if (argc != 2) {
		std::cout << "Mets que un argument, toccard\n";
		return (1);
	}
	return (0);
}
