#include "Serialization.hpp"
#include <stdint.h>
#include <iostream>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
#include <cstdlib>
int main()
{

	Data* data = new Data;
	data->i = 5;
	std::cout << "Data: " << data << std::endl;
	std::cout << "i   : " << data->i << std::endl;

	uintptr_t uptr;
	uptr = serialize(data);
	std::cout << "uptr : " << uptr << std::endl;

	data = deserialize(uptr);

	std::cout << "Data: " << data << std::endl;
	std::cout << "i   : " << data->i << std::endl;

}