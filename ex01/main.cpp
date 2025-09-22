#include "iter.hpp"

void	addOne(int&	num)
{
	num += 1;
}

void	printChar(const char& c)
{
	std::cout << c << std::endl;
}

int main()
{
	int	array[3] = {1, 2, 3};

	iter(array, 3, addOne);
	for (int i = 0; i < 3; i++)
		std::cout << array[i] << std::endl;
	
	char	str[] = "ciao";
	iter(str, 4, printChar);
}
