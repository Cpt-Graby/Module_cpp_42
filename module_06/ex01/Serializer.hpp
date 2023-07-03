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
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);

};

#endif
