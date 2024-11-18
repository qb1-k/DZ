#include <iostream>

void print(int* arr, int size)
{
	for (int element{}; element < size; ++element)
	{
		std::cout << arr[element] << " ";
	}
std::cout << std::endl;
}

int main()
{
	int integers1[]{ 1,4,7,4,1,9,13 };
	int size1{ sizeof(integers1) / sizeof(int) };
	print(integers1, size1);

	int integers2[]{5,4,1,8 };
	int size2{ sizeof(integers2) / sizeof(int) };
	print(integers2, size2);

	int integers3[]{ 14,0,45,1,7 };
	int size3{ sizeof(integers3) / sizeof(int) };
	print(integers3, size3);


	return 0;
}