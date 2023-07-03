
#include <stdint.h>
#include "Serializer.hpp"



int main() {

	Data t_data = {5};
	Data *ptr_data = &t_data;

	uintptr_t serial_data = Serializer::serialize(ptr_data);
	std::cout << serial_data << " is the serial_data\n";

	Data *ptr_new_data = Serializer::deserialize(serial_data);
	std::cout << ptr_new_data->value << " is the new data\n";

	return (0);
}
