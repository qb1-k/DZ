#include <iostream>

namespace Addition
{
	auto calc(int x, int y)
	{
		return x+y; 
	}
}

namespace Subtraction
{
	auto calc(int x, int y) 
	{
		return x - y;
	}
}

namespace Multiplication {
	auto calc(int x, int y)
	{
		return x * y;
	}
}
namespace Division {
	auto calc(int x, int y)
	{
		return x / y;
	}
}

int main()
{
	int x{};
	int y{};
	std::cout << "X= ";
	std::cin >> x;
	std::cout << "Y= ";
	std::cin >> y;

	
	std::cout << "Addition: " << Addition::calc(x, y) << std::endl;
	std::cout << "Subtraction: " << Subtraction::calc(x, y) << std::endl;
	std::cout << "Multiplication: " << Multiplication::calc(x, y) << std::endl;
	std::cout<< "Division: " << Division::calc(x, y) << std::endl;

	return 0;
}