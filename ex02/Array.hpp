#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& ref);
		Array& operator= (const Array& ref);
		~Array(void);

		unsigned int	size(void) const;

	private:
		T* array;
		unsigned int len;
};

#include "Array.tpp"