#include <iostream>

int** create_two_dim_array(int rows, int columns);
void fill_two_dim_array(int** arrayAddress, int rows, int columns);
void print_two_dim_array(int** arrayAddress, int rows, int columns);
void delete_two_dim_array(int** arrayAddress, int arrays);

int main()
{
	int rows{};
	int columns{};
	std::cout << "Enter the number of rows: ";
	std::cin >> rows;
	std::cout << "Enter the number of columns: ";
	std::cin >> columns;

	int** matrix{ create_two_dim_array(rows, columns) };

	fill_two_dim_array(matrix, rows, columns);
	std::cout << "Your multiplication table: " << std::endl;
	print_two_dim_array(matrix, rows, columns);
	delete_two_dim_array(matrix, rows);

	return 0;
}


int** create_two_dim_array(int rows, int columns)
{
	int** integers{ new int* [rows] };
	for (int row{}; row < rows; ++row)
	{
		integers[row] = new int[columns];
	}

	return integers;
}

void fill_two_dim_array(int** arrayAddress, int rows, int columns)
{
	for (int row{}; row < rows; ++row)
	{
		for (int column{}; column < columns; ++column)
		{
			arrayAddress[row][column] = (row+1) * (column+1);
		}
	}
}

void print_two_dim_array(int** arrayAddress, int rows, int columns)
{
	for (int row{}; row < rows; ++row)
	{
		for (int column{}; column < columns; ++column)
		{
			std::cout << arrayAddress[row][column] << '\t';
		}
		std::cout << std::endl;
	}
}

void delete_two_dim_array(int** arrayAddress, int arrays)
{
	for (int currentArray{}; currentArray < arrays; ++currentArray)
	{
		delete[] arrayAddress[currentArray];
	}
	delete[] arrayAddress;
}