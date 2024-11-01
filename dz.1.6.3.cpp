#include <iostream>

void func1(unsigned long int a, unsigned long int b, int lim)
{
    if (lim == 0) { return; }
    std::cout << a << " ";
    func1(b, a + b, lim - 1);
}

void func(int n)
{
    func1(1, 1, n);
}

int main() {
    int k{};
    setlocale(LC_ALL, "RUS");
    std::cout << " Введите число > 0: ";
    std::cin >> k;
    func(k);
    return 0;
}