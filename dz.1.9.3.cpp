#include <iostream>

void reversed(int* arr, int size);

int main()
{

    int arr[] = { 1,2,3,4,5,6,7,8,9 };

    std::cout << "Before the reverse function: ";

    for (int i = 0; i < 9; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;

    std::cout << "After the reverse function: ";

    reversed(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}
void reversed(int* arr, int size) {

    int* arr1 = new int[size];

    for (int i = 0; i < size; i++) arr[i] = arr[i];

    for (int i = 0; i < size; i++) {
        arr[i] = arr[(size - 1) - i];
    }
}