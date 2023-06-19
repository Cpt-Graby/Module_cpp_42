#ifndef EASYFIND_HPP
# define EASYFIND_HPP

<<<<<<< HEAD
#include <ostream>

class NotFoundException : public std::exception {
	const char *what() const throw() { return ("Value not found"); }
};

template<typename T>
int easyfind (T &container, int i) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw NotFoundException();
	return (*it);
}

#endif
=======
//template<typename T, typename U>

#endif 
>>>>>>> refs/remotes/origin/main
