## 📁 Exercises

### Ex00: Whatever Class
In Ex00, we implement the `Whatever` class, which allows for a demonstration of template functions. This exercise teaches basic template functionality, enabling the user to manipulate variables of any type.

```
Files:
├── ex00/Whatever.hpp
├── ex00/Makefile
├── ex00/main.cpp
```

### Ex01: Iter Function
In Ex01, the focus is on implementing an `iter` function that can iterate over any array and apply a given function to each element. This reinforces understanding of template functions and how to pass functions as arguments.

```
Files:
├── ex01/iter.hpp
├── ex01/Makefile
├── ex01/main.cpp
```

### Ex02: Array Template Class
Ex02 introduces the `Array` template class. It allows us to work with arrays of any type while encapsulating the array's size and providing basic functionality, such as accessing and modifying elements. This exercise enhances understanding of template classes and memory management.

```
Files:
├── ex02/Array.hpp
├── ex02/Makefile
├── ex02/main.cpp
```

## 🤖 Class Features

### Whatever
```cpp
template <typename T>
class Whatever {
public:
    static void print(const T &value);
};
```

### Iter
```cpp
template <typename T>
void iter(T *array, size_t length, void (*f)(T &)) {
    for (size_t i = 0; i < length; ++i) {
        f(array[i]);
    }
}
```

### Array
```cpp
template <typename T>
class Array {
private:
    T *arr;
    size_t size;

public:
    Array();
    Array(size_t n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    ~Array();

    size_t getSize() const;
    T &operator[](size_t index);
    const T &operator[](size_t index) const;
};
```

## 🎯 Learning Objectives

1. **Template Functions**
   - Understanding and implementing template functions like `iter()` to operate on generic types.

2. **Template Classes**
   - Working with template classes like `Array` to manage dynamic arrays of any type and size.
   - Learning how to create and manage dynamic arrays using templates.

3. **Memory Management**
   - Properly allocating and deallocating memory in template classes.
   - Managing dynamic arrays and avoiding memory leaks.

4. **Operator Overloading**
   - Overloading the assignment operator (`operator=`) and subscript operator (`operator[]`) for your template classes.

## 🛠️ Implementation Requirements

- **Orthodox Canonical Form**: Ensure that all classes, especially template classes, define constructors, destructors, and copy constructors/assignment operators.
- **Memory Management**: Handle dynamic memory carefully, particularly in template classes like `Array`.
- **Template Functions**: Ensure that functions like `iter()` are flexible and can operate on arrays of any type.

## 🧪 Testing Guidelines

### Ex00: Whatever Class
```cpp
Whatever<int>::print(42);  // Should print 42
Whatever<std::string>::print("Hello, World!");  // Should print "Hello, World!"
```

### Ex01: Iter Function
```cpp
void print(int &x) {
    std::cout << x << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);  // Should print 1 2 3 4 5
}
```

### Ex02: Array Template Class
```cpp
Array<int> arr(5);
arr[0] = 42;
arr[1] = 17;
std::cout << "Array size: " << arr.getSize() << std::endl;
std::cout << "First element: " << arr[0] << std::endl;
```

## ⚠️ Common Issues to Watch

1. **Memory Management**
   - Ensure that dynamically allocated memory in template classes is properly managed to prevent memory leaks.
   - Pay special attention to the destructor and copy constructor/assignment operator for the `Array` class.

2. **Template Instantiations**
   - Be careful when defining template functions and classes. Ensure that all types are correctly passed and used.

3. **Array Size Handling**
   - Ensure the `Array` class correctly handles the array size and prevents out-of-bounds access.

## 📝 Style Requirements

- Consistent and descriptive class names, especially for templates (`Array`, `Whatever`).
- Proper indentation and meaningful comments for readability.
- Well-structured header and source files for modularity.
- Clear, readable, and self-documenting code.

## 🔍 Debugging Tips

1. **Memory Leaks**
   - Use tools like Valgrind to detect memory issues and ensure your `Array` class is properly cleaning up allocated memory.

2. **Template Debugging**
   - If your template code isn’t working as expected, add static assertions or print debugging messages to check types and flow.

3. **Check Array Bounds**
   - Verify that you’re not exceeding the bounds of your dynamic array in the `Array` class to avoid segmentation faults.

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
