#include <iostream>
#include <cmath>

int func(int value, int power)
{
	setlocale(LC_ALL, "RUS");
	int result = pow(value,power);
	std::cout << value << " в степени " << power << " = " << result << std::endl;
	return result;
}


int main(int argc, char** argv)
{
	func(5, 2);
	func(3, 3);
	func(4, 4);
	return 0;
}
