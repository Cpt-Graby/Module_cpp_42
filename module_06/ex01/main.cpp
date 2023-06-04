
#include <iostream>
#include <cstdint>

struct Data {
	uintptr_t value;
};

uintptr_t serialize(Data *ptr) {return (reinterpret_cast<uintptr_t>(ptr));}

Data *deserialize(uintptr_t raw) {return (reinterpret_cast<Data *>(raw));}

int main() {

	Data t_data = {5};
	Data *ptr_data = &t_data;

	uintptr_t serial_data = serialize(ptr_data);
	std::cout << serial_data << " is the serial_data\n";

	Data *ptr_new_data = deserialize(serial_data);
	std::cout << ptr_new_data->value << " is the serial_data\n";

	return (0);
}
