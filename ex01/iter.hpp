#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename Type, typename F>

void	iter(Type& array, long long len, F func)
{
	if (!array || len < 0)
		return ;

	for (long long i = 0; i < len; i++)
	{
		func(array[i]);
	}
}

#endif
