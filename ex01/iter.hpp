#pragma once

#include <iostream>

template <typename T>
void	iter(T* adress, int size, void function(T& adress))
{
	for (int i = 0; i < size; i++)
		function(adress[i]);
	return ;
}
