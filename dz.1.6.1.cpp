﻿#include <iostream>

int sum(int a, int b) {
	int result = a + b;
	return result;
}
int diff(int a, int b) {
	int result = a - b;
	return result;
}
int multiplication(int a, int b) {
	int result = a * b;
	return result;
}
double division(double a, double b) {
	double result = a / b;
	return result;
}


int main(int argc, char** argv)
{
	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;

	return 0;
}