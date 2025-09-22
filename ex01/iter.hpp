#pragma once

#include <iostream>

template <typename T, typename F>
void	iter(T* adress, int size, void (f)(F&))
{
	for (int i = 0; i < size; i++)
		f(adress[i]);
	return ;
}
