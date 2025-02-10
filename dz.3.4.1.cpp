#include <iostream>


class Figure
{
private:
    std::string name; // название фигуры
    int num; // количество сторон

public:
    Figure(std::string name, int num) {
        this->name = name;
        this->num = num;
    }
    void get_sides_count() {
        std::cout << name << num << "\n";
    }
    Figure() {
        this->name = "Фигура: ";
        this->num = 0;
    }
};


class Triangle : public Figure
{
public:
    Triangle(std::string name, int num) : Figure{ name, num } {}
};

class Quadrangle : public Figure
{
public:
    Quadrangle(std::string name, int num) : Figure{ name, num } {}
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Figure f;
    f.get_sides_count();

    Triangle f1("Треугольник: ", 3);
    f1.get_sides_count();

    Quadrangle f2("Четырехугольник: ", 4);
    f2.get_sides_count();
}