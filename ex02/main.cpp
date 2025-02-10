
#include "./Array.hpp"

int main()
{
	std::string arr[5] = {"hello", "mohamed", "it's", "me", "ashraf"};

	try
	{
		Array<int> a(3);
		a[0] = 5;
		std::cout << "First val of A : " << a[0] <<std::endl;

		std::cout << "\n------------------\n\n" << a[0] <<std::endl;
	
		const Array<int> b = a;
		
		std::cout << "First val of B : " << b[0] <<std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
