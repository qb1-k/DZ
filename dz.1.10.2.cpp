#include <iostream>

int* createArr(int size)
{
	return new int[size] {};
}


int main()
{
	int size{};
	std::cout << "Enter the number of element: ";
	std::cin >> size;
	int* arr{ createArr(size) };

	std::cout << "Array: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}