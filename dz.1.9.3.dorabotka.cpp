#include <iostream>

void reverse(int* dynamicArray, int size);
void printArray(int* dynamicArray, int size);

int main()
{
    int size{ 9 };
    int* numbers{ new int[size] { 1,2,3,4,5,6,7,8,9 } };

    std::cout << "Before the reverse function: ";
    printArray(numbers, size);
    reverse(numbers, size);
    std::cout << "After the reverse function: ";
    printArray(numbers, size);
    delete[] numbers;
    return 0;
}
void reverse(int* dynamicArray, int size)
{
    int* copy{ new int[size]{} };
    for (int i{}, j{ size - 1 }; i < size; ++i, --j)
    {
        copy[j] = dynamicArray[i];
    };

    for (int i{}; i < size; ++i)
    {
        dynamicArray[i] = copy[i];
    };
    delete[] copy;

}
void printArray(int* dynamicArray, int size)
{
    for (int i = 0; i < 9; i++)
    {
        std::cout << dynamicArray[i];
    }
    std::cout << std::endl;
}


