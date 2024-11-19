#include <iostream>

int main()
{
	int size{};
	std::cout << "Enter the number of element: ";
	std::cin >> size;
	
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		std::cout << "arr [" << i << "]: ";
		std::cin >> arr[i];
	}

	std::cout << "Input array: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}