
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T& prm_1, T& prm_2)
{
	T cart = prm_1;
	prm_1 = prm_2;
	prm_2 = cart;
}

template <typename T>
T	min(T& prm_1, T& prm_2)
{
	return prm_1 < prm_2 ? prm_1 : prm_2;
}

template <typename T>
T	max(T& prm_1, T& prm_2)
{
	return prm_1 > prm_2 ? prm_1 : prm_2;
}

#endif
