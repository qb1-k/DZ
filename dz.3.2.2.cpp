#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>

class Counter {
private:
    int x;

public:

    Counter(int x) {
        this->x = x;
    }

    Counter() {
        x = 1;
    }

    void set_x_on1() {
        x++;
    }

    void set_x_off1() {
        --x;
    }

    int get_x_cout() const {
        std::cout << x << std::endl;
        return x;
    }

};



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    int a{};
    std::string c{}, b{};

    std::cout << "Вы хотите указать начальное значение счётчика? Введите <Да> или <Нет> : " << std::endl;
    std::cin >> b;

    if (b == "Да") {
        std::cout << "Введите начальное значение счётчика:\n";
        std::cin >> a;
    }

    Counter* z{};

    (b == "Да") ? (z = new Counter(a)) : (z = new Counter());

    for (;;) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> c;

        if (c == "+") {
            z->set_x_on1();
        }
        if (c == "-") {
            z->set_x_off1();
        }
        if (c == "=") {
            z->get_x_cout();
        }
        if (c == "x") {
            std::cout << "До свидания!";
            return 1;
        }
    }
    delete z;
}