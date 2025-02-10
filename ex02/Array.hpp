#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
class Array
{
	public:
		T *arr;
		size_t size;

		Array(unsigned int n) { size = n;	arr = new T[n]; }
		Array() { arr = new T; size = 0;}
		~Array() {delete []arr;}

		Array(const Array &obj)
		{
			size = obj.size;
			arr = new T[size];
			for (size_t i = 0; i < obj.size; i++)
				arr[i] = obj.arr[i];
		}

		Array &operator=(const Array &obj)
		{
			if (this != &obj)
			{
				delete []arr;
				size = obj.size;
				arr = new T[size];	
				for (size_t i = 0; i < obj.size; i++)
					arr[i] = obj.arr[i];
			}
			return *this;
		}

		const T& operator[](size_t index) const
		{
			if (index >= size) {
				throw std::out_of_range("Index out of range");
			}
			return arr[index];
		}
		
		T& operator[](size_t index)
		{
			if (index >= size) {
				throw std::out_of_range("Index out of range");
			}
			return arr[index];
		}
};

#endif
