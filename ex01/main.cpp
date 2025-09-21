#include "iter.hpp"

void	addOne(int&	num)
{
	num += 1;
}

int main()
{
	int	array[3] = {1, 2, 3};

	iter(array, 3, addOne);
	for (int i = 0; i < 3; i++)
		std::cout << array[i] << std::endl;
}
