
#include "./iter.hpp"

template <typename Type>

int	print_val(const Type elm)
{
	std::cout << elm << std::endl;
	return 1;
}

int main()
{
	std::string arr[5] = {"hello", "mohamed", "it's", "me", "ashraf"};
	
	int a[2] = {4, 5};
	int *p = NULL;


	iter(arr, 4, print_val<std::string>);
	iter(a, 2, print_val<int>);
	iter(p, 2, print_val<int>);

	return 0;
}
