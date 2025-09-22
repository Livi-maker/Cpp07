#include "Array.hpp"

Array::Array(void)
{
	array = new T[];
}

Array::~Array(void)
{
	delete array[];
}
