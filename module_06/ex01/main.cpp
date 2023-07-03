
#include "Serializer.hpp"


int main() {

	Data t_data = {5};
	std::cout << t_data.value << " is the data\n";
	std::cout << &t_data.value << " is the data\n";
	
	Data *ptr_data = &t_data;

	uintptr_t serial_data = Serializer::serialize(ptr_data);
	std::cout << serial_data << " is the serial_data\n";

	Data *ptr_new_data = Serializer::deserialize(serial_data);
	std::cout << ptr_new_data->value << " is the new data\n";
	std::cout << &ptr_new_data->value << " is the new data\n";
	
	std::cout << "----\nTEST 2 \n----\n";
	uintptr_t data2 = {5};
	std::cout << data2 << " is the data\n";
	std::cout << &data2 << " is the data\n";
	Data *ptr2Data = Serializer::deserialize(data2);
	std::cout << ptr2Data << " is the data\n";
	uintptr_t serial_data2 = Serializer::serialize(ptr2Data);
	std::cout << serial_data2 << " is the data\n";
	std::cout << &serial_data2 << " is the data\n";
	


	return (0);
}
