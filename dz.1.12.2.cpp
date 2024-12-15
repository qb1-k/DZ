#include <iostream>
#include <string>
#include <fstream>
void reverse(int* dynamicArray, int size)
{
	int* copy{ new int[size] {} };
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
	for (int i = 0; i < size; i++)
	{
		std::cout << dynamicArray[i];
	}
	std::cout << std::endl;
}

int main()
{
	std::fstream file{};
	// write to file.
	file.open("in.txt", std::fstream::out | std::fstream::app);
	if (file.is_open())
	{
		file << "8\n1 2 3 4 5 6 7 8";
	}
	file.close();

	std::ifstream ifile{ "in.txt" };
	if (ifile.is_open())
	{
		int size{};
		ifile >> size; 
		
		int n{ 2 };
		std::string text;
		for (int i = 1; i < n; i++) // пропускаем n - 1 строки
			ifile.ignore(255, '\n');

		if (!ifile.eof()) // если не конец файла
		{
			std::getline(ifile, text);// считали нужную строку

			int* numbers{ new int[size] {} };
			// не понимаю как занести данные из строки text в массив int
			reverse(numbers, size);
			printArray(numbers, size); 
			delete[] numbers;
		}

		else std::cout << "Такой строки в файле нет." << std::endl;

		ifile.close(); //закрыли  файл
	}

	return 0;
}