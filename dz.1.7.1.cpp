#include <iostream>

int main()
{
	int a = 0;
	short b = 0;
	long c = 0;
	long long d = 0;
	float e = 0;
	double f = 0;
	long double g = 0;
	bool h = true;

	std::cout << "Int: " << &a << " " << sizeof(a) << std::endl;
	std::cout << "Short:  " << &b << " " << sizeof(b) << std::endl;
	std::cout << "Long: " << &c << " " << sizeof(c) << std::endl;
	std::cout << "Long long: " << &d << " " << sizeof(d) << std::endl;
	std::cout << "Float: " << &e << " " << sizeof(e) << std::endl;
	std::cout << "Double: " << &f << " " << sizeof(f) << std::endl;
	std::cout << "Long double: " << &g << " " << sizeof(g) << std::endl;
	std::cout << "Bool: " << &h << " " << sizeof(h) << std::endl;

	return 0;
}
