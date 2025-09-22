#pragma once

#include <iostream>

template <typename T>
void	iter(T* adress, int size, void (f)(T&))
{
	for (int i = 0; i < size; i++)
		f(adress[i]);
	return ;
}

template <typename T>
void	iter(T* adress, int size, void (f)(const T&))
{
	for (int i = 0; i < size; i++)
		f(adress[i]);
	return ;
}
