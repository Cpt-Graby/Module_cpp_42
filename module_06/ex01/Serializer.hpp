#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>

struct Data {
	uintptr_t value;
};

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &src);
		Serializer &operator=(const Serializer &src);
		~Serializer();
		
	public:
		static uintptr_t serialize(Data *ptr) {return (reinterpret_cast<uintptr_t>(ptr));};
		static Data *deserialize(uintptr_t raw) {return (reinterpret_cast<Data *>(raw));};

};

#endif
